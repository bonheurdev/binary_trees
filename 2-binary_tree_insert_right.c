#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a new right-child node
 *
 * @parent: Pointer for the parent node
 * @value: Value for the new node
 *
 * Return: Pointer to the created node,
 * or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
binary_tree_t *New_Node;

if (!parent)
return (NULL);/*Return NULL if parent is NULL*/

New_Node = malloc(sizeof(binary_tree_t));
if (!New_Node)
return (NULL);/*Return NULL on memory allocation failure*/

New_Node->n = value;
New_Node->parent = parent;
New_Node->left = NULL;
New_Node->right = parent->right;
parent->right = New_Node;
if (New_Node->right)
New_Node->right->parent = New_Node;
return (New_Node);
}
