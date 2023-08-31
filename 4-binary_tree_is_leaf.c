#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Checks if a node is a leaf
 *
 * @node: Pointer to the node to check
 * A node is considered a leaf if it has no left or right children
 *
 * Return: 1 if node is a leaf, 0 otherwise
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
if (node == NULL)
{
return (0); /* Return 0 if node is NULL*/
}

return (node->left == NULL && node->right == NULL);
}
