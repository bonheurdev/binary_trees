#include "binary_trees.h"

/**
 * binary_tree_inorder - travers through binary tree using in-order traversal
 * @tree: pointer to root node of the tree
 * @func: function pointer to call nodes
 *
 * Return: return void.
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
if (!tree || !func)
return;

binary_tree_inorder(tree->left, func);
func(tree->n);
binary_tree_inorder(tree->right, func);
}
