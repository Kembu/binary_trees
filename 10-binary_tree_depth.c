#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree: pointer to the node to measure the depth
 *
 * Return: depth of node else 0
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree == NULL || tree->parent == NULL)
		return (0);
	count += 1;
	count += binary_tree_depth(tree->parent);

	return (count);
}
