import html
import xml.etree.ElementTree as ET

# Get the indentation of a given line
def get_line_indentation(line) -> int:

    indent = len(line) - len(line.strip())

    return indent

# Fix the tag style in a xml_string
def fix_style(xml_string, actions):

    lines = xml_string.split("\n")
    processed_lines = list()

    for line in lines:

        # Check if the line has to be splitted in two
        split_line = False
        for action in actions:
            if action in line and "<" in line and ">" in line:
                split_line = line.count('>') > 1
        
        # Add the lines to the processed line list
        if split_line:
            new_lines = line.split('><')
            for new_line in new_lines:
                if '>' in new_line: new_line = '<' + new_line
                elif '<' in new_line: new_line: new_line = new_line + '>'
                else: new_line: new_line = '<' + new_line + '>'
                processed_lines.append(new_line)
        else:
            processed_lines.append(line)
        
    pretty_str = "\n".join(line for line in processed_lines)

    return pretty_str

# Fix the indentation in a xml_string
def fix_indentation(xml_string, actions):

    lines = xml_string.split("\n")
    processed_lines = list()

    code_section = False

    for line in lines:

        if '<Code>' in line:
            code_section = True
        
        new_line = line
        if code_section:
            if '<Code>' in line or '</Code>' in line:
                new_line = " " * 4 + new_line
            elif any(action + '>' in line for action in actions):
                new_line = " " * 8 + new_line
            else:
                new_line = " " * 12 + new_line
        
        if '</Code>' in line:
            code_section = False

        processed_lines.append(new_line)
    
    pretty_str = "\n".join(line for line in processed_lines)
    return pretty_str

# Get a properly formatted string from a tree
def get_formatted_string(tree, actions) -> str:

    xml_string = ET.tostring(tree, encoding='unicode')
    xml_string = html.unescape(xml_string)  # unescape HTML entities
    styled_string = fix_style(xml_string, actions)
    indented_string = fix_indentation(styled_string, actions)

    return indented_string

# Extract a BT structure from a XML file
def get_bt_structure(xml_string) -> str:

    root = ET.fromstring(xml_string)
    behavior_tree_element = root.find('.//BehaviorTree')
    
    if behavior_tree_element is None:
        print("No BehaviorTree found in the XML")
        return None
    
    return root

# Get a list of properly named actions to search in the nodes directory
def get_action_set(tree) -> set:

    actions = set()
    structure_elements = ["Sequence", "BehaviorTree"]

    for leaf in tree:

        if leaf.tag not in actions and leaf.tag not in structure_elements: actions.add(leaf.tag)
        child_actions = get_action_set(leaf)
        actions.update(a for a in child_actions if a not in actions)
    
    return actions

def add_action_code(tree, actions, action_dir):

    code_section = ET.SubElement(tree, "Code")

    # Add each actiion code to the tree
    for action_name in actions:

        # Get the action code
        action_route = action_dir + action_name + ".py"
        action_file = open(action_route, 'r')
        action_code = action_file.read()

        # Add a new subelement to the code_section
        action_section = ET.SubElement(code_section, action_name)
        action_section.text = "\n" + action_code + "\n"

def main():

    # Define the directory where the node files are located
    action_dir = '../actions/'
    
    # Get the tree XML file and read its content
    file = open('../resource/tree.xml', 'r')
    tree_xml = file.read()

    # Parse the tree file
    tree = get_bt_structure(tree_xml)
    
    # Obtain the defined actions
    actions = get_action_set(tree)

    # Add subsections for the action code
    add_action_code(tree, actions, action_dir)

    # Serialize the modified XML to a properly formatted string
    final_str = get_formatted_string(tree, actions)

    # Write in a file
    output_xml = open("../resource/final_tree.xml", "w")
    output_xml.write(final_str)
    output_xml.close()

main()
