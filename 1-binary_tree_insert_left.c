#include "binary_trees.h"
/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: pointer to the node to insert the left-child in
 * @value: the value to store in the new node
 * Return: pointer to the created node, or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *left = NULL;
	binary_tree_t *tmp = NULL;

	if (parent == NULL)
		return (NULL);

	left  = malloc(sizeof(binary_tree_t));
	if (left == NULL)
		return (NULL);

	left->n = value;
	left->parent = parent;
	left->right = NULL;

	tmp = parent->left;
	/* Making the new left-child */
	parent->left = left;
	if (tmp != NULL)
	{
		/* making the old-left child, the kid of new left-child */
		tmp->parent = left;
	}
	left->left = tmp;

	return (left);
}
