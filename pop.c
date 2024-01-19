#include "monty.h"

/**
 * f_pop - prints from top
 * @head: stack
 * @counter: line num
 *
 * Return: there is none
 */

void f_pop(stack_t **head, unsigned int counter)
{
	stack_t *h;

	if (*head == NULL)
	{
		fprint(stderr, "L%d: can't pop an empty stack\n", counter);
		fclose(bus.file);
		free(bus.counter);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	*head = h->next;
	free(h);
}
