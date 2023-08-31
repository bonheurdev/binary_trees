#include "binary_trees.h"

/**
 * binary_tree_node - Creates a new binary tree node
 *
 * @parent: Pointer to the parent node of the new node
 * @value: Value to store in the new node
 *
 * declare the new node with its data type
 * allocate memory the new node
 * assign values to the node
 *
 * Return: Pointer to the new node, or NULL on failure
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
binary_tree_t *new_Node;

new_Node = (binary_tree_t *)malloc(sizeof(binary_tree_t));        

if (new_Node == NULL)
{
return (NULL);
}

new_Node->parent = parent;
new_Node->n = value;
new_Node->left = NULL;
new_Node->right = NULL;

return (new_Node);
}
