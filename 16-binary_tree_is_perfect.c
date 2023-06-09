#include "binary_trees.h"

/**
 * hasTwoNodes - checks if a node is an internal node
 *
 * @tree: Pointer to binary tree
 * Return: 1 if internal node or leaf node else 0
 */
int hasTwoNodes(const binary_tree_t *tree)
{
	if (tree->left != NULL && tree->right != NULL)
	{
		if (tree->left != NULL && tree->right != NULL)
			return (1);
		return (0);
	}
	return (1);
}

/**
 * get_height - measures the height of a tree
 *
 * @tree: pointer to binary tree
 * Return: heigh of tree
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
 * binary_tree_is_perfect - checks if a binary tree is perfect
 *
 * @tree: Pointer to binary tree
 * Return: 1 if the binary tree is perfect else 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t leftHeight, rightHeight, heightDiff;

	if (tree == NULL)
		return (0);
	leftHeight = get_height(tree->left);
	rightHeight = get_height(tree->right);
	heightDiff = leftHeight - rightHeight;

	if (heightDiff == 0 && hasTwoNodes(tree) == 1)
	{
		if (tree->left == NULL && tree->right == NULL)
			return (1);

		if (binary_tree_is_perfect(tree->left) == 1 &&
				binary_tree_is_perfect(tree->right) == 1)
		{
			return (1);
		}
	}
	return (0);
}
