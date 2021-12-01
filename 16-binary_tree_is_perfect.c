#include "binary_trees.h"
/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height.
 * Return: height of tree.
 * The height of a node is the number of edges on the
 * longest path from the node to a leaf.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_h, right_h;

	if (tree == NULL)
		return (0);

	left_h = binary_tree_height(tree->left);
	right_h = binary_tree_height(tree->right);

	if (left_h >= right_h)
		return (left_h + 1);
	return (right_h + 1);
}
/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 * Return: 0 if tree is not perfect. 1 If tree is perfect
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (binary_tree_height(tree->left) == binary_tree_height(tree->right))
	{
		return (binary_tree_is_perfect(tree->left) ==
				binary_tree_is_perfect(tree->right));
	}

	return (0);
}
