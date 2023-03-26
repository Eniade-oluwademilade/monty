#include "monty.h"
/**
 * add_node - adds node to list
 * @head: start of list
 * Return: Nothing
 */
void addqueue(stack_t **head, int n)
{
	stack_t *new_node, *dhead;

	dhead = head;

	if (new_node == NULL)
	{
		printf("Error\n");
	}

	new_node->n = n;
	new_node->next = NULL;

	if (dhead)
	{
		while (dhead)
			dhead = dhead->next;
	}

	if (!dhead)


