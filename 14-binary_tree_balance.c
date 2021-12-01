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
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 * Return: The difference between the height of the two branchees or
 * 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}
