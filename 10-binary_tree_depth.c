#include "binary_trees.h"
#include <stddef.h>
/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree: pointer to the node to measure the depth
 * Return: depth of a node
 * The depth of a node is the number of edges
 * from the node to the tree's root node.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t n_depth = 0;

	/* A root node will have a depth of 0. */
	if (tree == NULL || tree->parent == NULL)
		return (0);

	while (tree && tree->parent)
	{
		tree = tree->parent;
		n_depth++;
	}

	return (n_depth);
}
