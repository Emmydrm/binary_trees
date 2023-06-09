#include "binary_trees.h"
/**
 * binary_tree_uncle - returns the uncle of node
 *
 * @node: node in binary tree
 * Return: uncle of node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *parent;
	binary_tree_t *uncle;

	if (node == NULL)
		return (NULL);

	if (node->parent == NULL)
		return (NULL);

	parent = node->parent;
	if (parent->parent == NULL)
		return (NULL);
	if (parent->parent->right != parent)
		uncle = parent->parent->right;
	else if (parent->parent->left != parent)
		uncle = parent->parent->left;
	return (uncle);
}
