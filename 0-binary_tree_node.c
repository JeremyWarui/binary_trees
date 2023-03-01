#include "binary_trees.h"


/**
 * binary_tree_node - Creates a binary tree mode
 *
 * @parent: node parent
 * @value: node value
 * Return: pointer to the new node or NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *tmp;

	tmp = malloc(sizeof(binary_tree_t));

	if (tmp == NULL)
		return (NULL);

	tmp->parent = parent;
	tmp->n = value;
	tmp->left = NULL;
	tmp->right = NULL;

	return (tmp);

}
