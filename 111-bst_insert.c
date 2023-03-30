#include "binary_trees.h"

/**
 * bst_insert - inserts a value in a Binary search tree
 * @tree: Pointer to binary tree
 * @value: value to be inserted
 * Return: pointer to created node or NULL on failure
 */
bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *temp = *tree, *parent, *new_node;

	if (tree == NULL)
		return (NULL);
	if (*tree == NULL)
	{
		*tree = binary_tree_node(NULL, value);
		return (*tree);
	}
	while (temp != NULL)
	{
		parent = temp;
		if (value > temp->n)
		{
			temp = temp->right;
		} else if (value < temp->n)
		{
			temp = temp->left;
		} else
		{
			return (NULL);
		}
	}
	new_node = binary_tree_node(parent, value);
	if (value < parent->n)
		parent->left = new_node;
	else
		parent->right = new_node;
	return (new_node);
}
