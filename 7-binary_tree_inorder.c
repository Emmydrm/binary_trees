#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_inorder - Goes through a binary tree using in-order traversal
 * @tree: Pointer to binary tree
 * @func: function to be carried out on each node
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_inorder(tree->left, func);

	func(tree->n);

	binary_tree_inorder(tree->right, func);
}
