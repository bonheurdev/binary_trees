#include "binary_trees.h"

/**
 * binary_tree_delete - Deletes an entire binary tree
 *
 * @tree: Pointer to the root node of the tree to delete
 * Recursively delete the left and right subtrees
 */
void binary_tree_delete(binary_tree_t *tree)
{
if (tree == NULL)
{
return; /* Do nothing if tree is NULL*/
}
binary_tree_delete(tree->left);
binary_tree_delete(tree->right);

/* Free the memory allocated for the current node*/
free(tree);
}
