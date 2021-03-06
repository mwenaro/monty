#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include "monty.h"

/**
* push - push into the list
*
*@stack: the list
*@line_cnt: line
*
*Returns: nothing
*/

void push(stack_t **stack, unsigned int line_cnt)
{
	char *n = global.argument;

	if (!n || !isdigit(*n))
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_cnt);
	exit(EXIT_FAILURE);
	}

	if (!add_node(stack, atoi(n)))
	{
		fprintf(stderr, "Error: malloc failed\n");
	exit(EXIT_FAILURE);
	}

}
