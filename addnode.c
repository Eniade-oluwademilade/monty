#include "monty.h"

/**
 * addnode - add node to head of stack
 * @head: pointer to the head of string.
 * @n: new value
 * Return: Nothing
 */
void addnode(stack_t **head, int n)
{
	stack_t *new_node, *dhead;

	dhead = *head;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		printf("Error\n");
		exit(0);
	}
	if (dhead)
		dhead->prev = new_node;
	new_node->n = n;
	new_node->next = *head;
	new_node->prev = NULL;
	*head = new_node;
}
