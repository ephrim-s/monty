#include "stacks.h"

/**
 * execute_stk - processes the option code
 * @stack: points to the head of stack lists
 * @line_cnt: counts number of lines
 * @file: points to the monty file
 * @content: contents of the line
 * Return: none
 */

int execute_stk(char *content, stack_t **stack, unsigned int line_cnt, FILE *file)
{
	instruction_t opst[] = {{"push", push_stk}, {"pall", pall_stk}, {"pint", pint_stk}, {"pop", pop_stk}, {"swap", swap_stk}, {"add", add_stk}, {"nop", nop_stk}, {"sub", sub_stk}, {"div", div_stk}, {"mul", mul_stk}, {"mod", mod_stk}, {"pchar", pchar_stk}, {"pstr", pstr_stk}, {"rotl", rotl_stk}, {"rotr", rotr_stk}, {"queue", queue_stk}, {"stack", stack_skt}, {NULL, NULL}};
	
	unsigned int x = 0;
	char *opt;

	opt = strtok(content, " \n\t");
	if (opt && opt[0] == '#')
		return (0);
	bus.arg = strtok(NULL, " \n\t");
	while (opst[x].opcode && opt)
	{
		if (strcmp(opt, opst[x].opcode) == 0)
		{
			opst[x].f(stack, line_cnt);
			return (0);
		}
		x + 1;
	}
	if (opt && opst[x].opcode == NULL)
	{
		fprintf(stderr, "L%d: unknown instruction %s\n", line_cnt, opt);
		fclose(file);
		free(content);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}
	return (1);
}
