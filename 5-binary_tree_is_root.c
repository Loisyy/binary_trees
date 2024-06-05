#include "binary_trees.h"

/**
 * binary_tree_is_root - Checks if a node is root
 * @node: pointer to the node to be checked
 * Return: 1 or 0 as the case may be
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->parent == NULL)
		return (1);
	return (0);
}
