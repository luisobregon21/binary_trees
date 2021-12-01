#include "binary_trees.h"
/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent: pointer to the node to insert the right-child in
 * @value: the value to store in the new node
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
	right->right = NULL;

	tmp = parent->right;
	/* Making the new right-child */
	parent->right = right;
	if (tmp != NULL)
	{
		/* making the old-right child, the kid of new right-child */
		tmp->parent = right;
	}
	right->right = tmp;

	return (right);
}
