#ifndef BINARY_TREE
#define BINARY_TREE

#include <stdio.h>
#include <stdlib.h>

/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
	int n;
	struct binary_tree_s *parent;
	struct binary_tree_s *left;
	struct binary_tree_s *right;
};
typedef struct binary_tree_s binary_tree_t;
typedef struct binary_tree_s bst_t;
typedef struct binary_tree_s heap_t;
typedef struct binary_tree_s avl_t;

/* creates binary tree */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);
/* insert node on left side */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);
/* insert node on right side */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);
/* check if node is root */
int binary_tree_is_root(const binary_tree_t *node);

#endif
