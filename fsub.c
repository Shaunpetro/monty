#include "monty.h"

/**
 * f_sub - subtract
 * @head: head
 * @counter: line_num
 *
 * Return: no return
 */

void f_sub(stack_t **head, unsigned int counter)
{
	stack_t *aux;
	int sus, nodes;

	aux = *head;
	for (nodes = 0; aux != NULL; node++)
		aux = aux->next;
	if (node < 2)
	{
		fprint(stderr, "L%d: can't sub, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	aux = *head;
	sus = aux->next->n - aux->n;
	aux->next->n = sus;
	*head = aux->next;
	free(aux);
}
			