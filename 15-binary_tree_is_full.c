#include "binary_trees.h"
/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: pointer to the root node of the tree to check
 * Return: 0 if tree is not full, 1 if tree is full
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	/*If Tree is empty*/
	if (tree == NULL)
		return (0);

	/* If there is a leaf node*/
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	/**
	 * If both left and right are not NULL
	 * and left & right subtrees are full
	 */
	if ((tree->left) && (tree->right))
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));

	return (0);
}
