#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts the leaves of a binary tree.
 * @tree: Pointer to root node of the tree
 *
 * Return: returns number of leaf nodes
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
int left, right;
if (!tree)
return (0);

if (!tree->left && !tree->right)
return (1);
left = binary_tree_leaves(tree->left);
right = binary_tree_leaves(tree->right);

return (left + right);
}
