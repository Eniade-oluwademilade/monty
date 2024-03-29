#include "monty.c"
/**
 * f_queue - prints top
 * @head: start of node
 * @counter: line number
 * Return: Nothing
 */
void f_queue(stack_t **head, unsigned int counter)
{
	(void)head;
	(void)counter;
	bus.lifi = 1;
}

/**
 * addqueue - adds node to tail of stack
 * @n: new value
 * @head: start of list
 * Return: Nothing
 */
void addqueue(stack_t **head, int n)
{
	stack *new_node, *dhead;

	*dhead = *head;
	new_node = malloc(sizeof(stack_t));

	if (new_node == NULL)
	{
		printf("Error\n");
	}
	new_node->n = n;
	new_node->next = NULL;

	if (dhead)
	{
		while (dhead->next)
			dhead = dhead->next;
	}

	if (!dhead)
	{
		*head = new_node;
		new_node->prev = NULL;
	}
	else
	{
		dhead->next = new_node;
		new_node->prev = dhead;
	}
}

