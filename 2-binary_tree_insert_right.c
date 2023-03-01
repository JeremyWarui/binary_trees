#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 *
 * @parent: node parent
 * @value: node value
 * Return: pointer to the new node or NULL on failure
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *tmp;

	if (parent == NULL)
		return (NULL);

	tmp = malloc(sizeof(binary_tree_t));

	if (tmp == NULL)
		return (NULL);

	tmp->parent = parent;
	tmp->n = value;
	tmp->right = parent->right;
	tmp->left = NULL;

	if (parent->right != NULL)
		parent->right->parent = tmp;
	parent->right = tmp;

	return (tmp);

}
