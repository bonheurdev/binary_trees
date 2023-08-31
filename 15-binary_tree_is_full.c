#include "binary_trees.h"

/**
 * binary_tree_is_full - checks  if a binary tree is full
 * @tree: Pointer to the root of tree.
 *
 * an empty tree is not full
 * Return: 1 if tree is full. 0 if not.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
if (!tree)
return (0);/*an empty tree is not full*/

if (!tree->right && !tree->left)
return (1);

if (tree->right && tree->left)
return (binary_tree_is_full(tree->left) &&
binary_tree_is_full(tree->right));

return (0);
}
