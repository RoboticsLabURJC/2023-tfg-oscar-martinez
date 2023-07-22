import typing
from lxml import etree
import html


def get_indentation(element) -> str:
    if element is None:
        return ""
    else:
        parent = element.getparent()
        return get_indentation(parent) + "    "

def prettify_xml(element, actions):

    pretty_str = etree.tostring(element, pretty_print=True).decode()
    pretty_str = html.unescape(pretty_str)  # unescape HTML entities
    indent_dict = dict()

    lines = pretty_str.split("\n")
    for i, line in enumerate(lines):
        for action in actions:
            if action in line and "<" in line and ">" in line:
                key_list = list(indent_dict.keys())
                if action not in key_list: 
                    indent = len(line) - len(line.strip())
                    indent_dict[action] = indent
                else:
                    indent = indent_dict[action]
                    lines[i] = indent * " " + line  # directly modifying the list
    
    pretty_str = "\n".join(line for line in lines)

    return pretty_str


# Extract a BT structure from a XML file
def get_bt_structure(xml_string) -> str:

    root = etree.fromstring(xml_string)
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
    
    for action_name in actions:

        # Get the action code
        action_route = action_dir + action_name + ".py"
        action_file = open(action_route, 'r')
        action_code = action_file.read()

        # Append the action code to the subsection of the xml
        action_elements = tree.findall('.//' + action_name)
        for elem in action_elements:
            indented_code = "\n".join(get_indentation(elem) + line for line in action_code.split("\n"))
            elem.text = "\n" + indented_code + "\n"

    # Serialize the modified XML back to a string
    pretty_str = prettify_xml(tree, actions)
    output_xml = open("output.xml", "w")
    output_xml.write(pretty_str)
    output_xml.close()

main()
