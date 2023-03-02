#include "binary_trees.h"

/**
 * binary_tree_rotate_right - performs a right-rotation on a binary tree
 *
 * @tree: tree root
 * Return: pointer to the new root
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *p_root;

	if (tree == NULL || tree->left == NULL)
		return (tree);

	p_root = tree->left;

	if (p_root->right)
	{
		tree->left = p_root->right;
		p_root->right->parent = tree;
	}
	else
		tree->left = NULL;

	p_root->right = tree;
	p_root->parent = tree->parent;
	tree->parent = p_root;

	return (p_root);
}
