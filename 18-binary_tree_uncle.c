#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a node in a binary tree
 * @node: node to find the uncle
 *
 * Return: Pointer to the uncle node
 * If node is NULL, return NULL
 * If node has no uncle, return NULL
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
binary_tree_t *node_uncle;

if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
return (NULL);
node_uncle = node->parent->parent;
if (node_uncle->left == node->parent)
return (node_uncle->right);
return (node_uncle->left);
}
