#include "binary_trees.h"

/**
 * binary_tree_uncle - function that finds the
 *                     uncle of a node
 * @node: a pointer to the node to find the uncle
 * Return: If node is NULL, return NULL
 *          OR node has no uncle NULL.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL ||
	    node->parent == NULL ||
	    node->parent->parent == NULL)
		return (NULL);
	if (node->parent->parent->left == node->parent)
		return (node->parent->parent->right);
	return (node->parent->parent->left);
}