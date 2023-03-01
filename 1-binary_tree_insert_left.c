#include "binary-trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 *
 * @parent: node parent
 * @value: node value
 * Return: pointer to the new node or NULL on failure
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t tmp;

	if (parent == NULL)
		return (NULL);

	tmp = malloc(sizeof(binary_tree_t));

	if (tmp == NULL)
		return (NULL);

	tmp->parent = parent;
	tmp->n = value;

	if (parent->left != NULL)
		parent->left->parent = tmp;
	
	parent->left = tmp;

	return (tmp);

}
