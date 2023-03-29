#include "binary_trees.h"

/**
 * binary_tree_size - Measures the size of a binary tree
 *
 * @tree: Pointer to binary tree node
 * Return: size of tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left_size;
	size_t right_size;

	if (tree == NULL)
		return (0);

	left_size = 1 + binary_tree_size(tree->left);
	right_size = 1 + binary_tree_size(tree->right);

	return (left_size + right_size - 1);
}
