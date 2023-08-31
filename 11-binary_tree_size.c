#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: Pointer to root node of the tree
 *
 * Return: returns size of the tree.
 */
size_t binary_tree_size(const binary_tree_t *tree)      
{
int left, right;

if (tree == NULL)
return (0);
left = binary_tree_size(tree->left);
right = binary_tree_size(tree->right);

return ((left + right)+1);
}
