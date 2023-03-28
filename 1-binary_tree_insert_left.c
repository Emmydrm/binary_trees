#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_insert_left - Inserts a node as the left-child of another node
 *
 * @parent: A pointer to the parent node of the node to create
 * @value: The value to put in the new node
 *
 * Return: A pointer to the new node, or NULL on failure or if parent is NULL
 * If parent already has a left-child, the new node must take its place,
 * and the old left-child must be set as the left-child of the new node.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node, *temp;

	if (parent == NULL)
		return (NULL);

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;
	new_node->parent = parent;

	if (parent->left == NULL)
		parent->left = new_node;
	else
	{
		temp = parent->left;
		temp->parent = new_node;
		parent->left = new_node;
		new_node->left = temp;
	}

	return (new_node);
}
