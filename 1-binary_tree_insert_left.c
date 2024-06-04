#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as the left-child of another node
 * @parent: pointer to the node to insert the left-child in
 * @value: value to store in the new node
 * Return: Null or pointer to new node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_left = malloc(sizeof(binary_tree_t));

	if (parent == NULL || new_left == NULL)
		return (NULL);

	new_left->n = value;
	new_left->parent = parent;
	new_left->left = NULL;
	new_left->right = NULL;

	if (parent->left != NULL)
	{
		new_left->left = parent->left;
		parent->left->parent = new_left;
		parent->left = new_left;
	}
	else
		parent->left = new_left;

	return (new_left);

}
