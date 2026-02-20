#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least one child
 * @tree: pointer to the root node of the tree
 *
 * Return: number of nodes with at least one child
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL || tree->right != NULL)
		count = 1;

	return (count + binary_tree_nodes(tree->left) +
		binary_tree_nodes(tree->right));
}
