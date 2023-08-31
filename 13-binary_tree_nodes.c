#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts  nodes with at least one child node.
 * @tree: Pointer to root node of the tree
 *
 * Return: returns nodes with 1 child
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
int left, right;
int Curr_node;

if (tree == NULL)
return (0);/*return zero If tree is NULL*/

left = binary_tree_nodes(tree->left);
right = binary_tree_nodes(tree->right);
Curr_node = (tree->left != NULL || tree->right != NULL);
return (left + right + Curr_node);
}
