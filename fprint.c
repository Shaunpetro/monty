#include "monty.h"

/**
 * f_pint - prints from the top
 * @head: stack head
 * @counter: line number
 *
 * Return: no return func
 */

void f_pint(stack_t **head, unsigned int counter)
{
	if (*head == NULL)
	{
		fprint(sterr, "L%u: can's pint, stack empty\n", counter);
		fclose(bus.file);
		free(bus.counter);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%D\n", (*head)->n);
}
