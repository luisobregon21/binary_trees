#include "binary_trees.h"
/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent: pointer to the node to insert the right-child in
 * @value: the value to store in the right node
 * Return: pointer to the created node, or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *right = NULL;
	binary_tree_t *tmp = NULL;

	if (parent == NULL)
		return (NULL);

	right  = malloc(sizeof(binary_tree_t));
	if (right == NULL)
		return (NULL);

	right->n = value;
	right->parent = parent;
	right->left = NULL;

	tmp = parent->right;
	parent->right = right;

	if (tmp != NULL)
	{
		tmp->parent = right;
	}
	right->right = tmp;

	return (right);
}

