#include "binary_trees.h"

/**
 * get_height - get height of binary tree
 * @tree: Pointer to binary tree
 * Return: height of binary tree
 */
size_t get_height(const binary_tree_t *tree)
{
	size_t leftHeight, rightHeight;

	if (tree == NULL)
		return (0);

	leftHeight = get_height(tree->left);
	rightHeight = get_height(tree->right);

	if (leftHeight > rightHeight)
		return (leftHeight + 1);
	else
		return (rightHeight + 1);
}

/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: Pointer to binary tree
 * Return: balance factor of binary tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t leftHeight, rightHeight;

	if (tree == NULL)
		return (0);

	leftHeight = get_height(tree->left);
	rightHeight = get_height(tree->right);
	return (leftHeight - rightHeight);
}
