#ifndef MONTY_H_
#define MONTY_H_

#include <stdio.h>
#include <stlib.h>
#include <unistd.h>
#include <string.h>
#include <ctype.h>
#include <fcntl.h>
#include <sys/types.h>

/**
 * struct stack_s - doubly linked list representation of stack
 * @n: interger
 * @prev: previous element ptr
 * @next: next element ptr
 *
 * Description: doubly LL not struct for stack, LIFO, FIFO
 */

typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct bus_s - variables: args, file & line count
 * @args: value
 * @file: ptr to monty file
 * @content: line content
 * @lifi: flag change stack <-> queue
 * Description: carries values through the program
 */

typedef struct bus_s
{
	char *arg;
	FILE *file;
	char *content;
	int lifi;
} bus_t;
extern bus_t bus;

/**
 * struct instruction_s - opcode and its func
 * @opcode: the opcode
 * @f: funcc to hand opcode
 *
 * Description: opcode & func for stack, queues
 *              FIFO Holberton projects
 */

typedef struct instruction_s;
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;



#endif
