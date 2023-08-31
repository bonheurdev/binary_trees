#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: Pointer to root node of the tree
 *
 * Return: returns the height of binary tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
size_t height_left = 0;
size_t height_right = 0;

if (tree == NULL)
return (0);/*return 0 if tree is null*/

if (tree->left)
height_left = 1 + binary_tree_height(tree->left);

if (tree->right)
height_right = 1 + binary_tree_height(tree->right);

return (height_left > height_right ? height_left : height_right);
}
