#include "monty.h"

/**
* pall - for printing all elements
*
*@stack: the list
*
*Returns: nothing
*/

void pall(stack_t **stack, unsigned int line_cnt __attribute__((unused)))
{
	print_stack(*stack);
}
