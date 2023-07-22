import xml.etree.ElementTree as ET
import typing
import os

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

def main():


    # Define the directory where the node files are located
    action_dir = '../actions/'
    
    # Get the tree XML file and read its content
    file = open('../resource/tree.xml', 'r')
    xml_string = file.read()

    # Parse the tree file
    tree = get_bt_structure(xml_string)
    
    # Obtain the defined actions
    actions = get_action_set(tree)
    for action in actions:
        action_route = action_dir + action + ".py"
        action_file = open(action_route, 'r')
        action_code = action_file.read()
        print(action_code)

main()