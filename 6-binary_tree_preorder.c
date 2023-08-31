#include "binary_trees.h"

/**
 * binary_tree_preorder - travers through binary tree using pre-order traversal
 * @tree: point to root node of the tree
 * @func: function pointer to call nodes
 * Return: return void.
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
if (!tree || !func)
return;

func(tree->n);
binary_tree_preorder(tree->left, func);
binary_tree_preorder(tree->right, func);
}
