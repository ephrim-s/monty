#include "stacks.h"
/**
* execute - executes the opcode
* @stack: head linked list - stack
* @line_cnt: line_line_cnt
* @file: poiner to monty file
* @content: line content
* Return: none
*/
int execute(char *content, stack_t **stack, unsigned int line_cnt, FILE *file)
{
	instruction_t opst[] = {
				{"push", stk_push}, {"pall", stk_pall}, {"pint", stk_pint},
				{"pop", stk_pop},
				{"swap", stk_swap},
				{"add", stk_add},
				{"nop", stk_nop},
				{"sub", stk_sub},
				{"div", stk_div},
				{"mul", stk_mul},
				{"mod", stk_mod},
				{"pchar", stk_pchar},
				{"pstr", stk_pstr},
				{"rotl", stk_rotl},
				{"rotr", stk_rotr},
				{"queue", stk_queue},
				{"stack", stk_stack},
				{NULL, NULL}
				};
	unsigned int i = 0;
	char *op;

	op = strtok(content, " \n\t");
	if (op && op[0] == '#')
		return (0);
	bus.arg = strtok(NULL, " \n\t");
	while (opst[i].opcode && op)
	{
		if (strcmp(op, opst[i].opcode) == 0)
		{	opst[i].f(stack, line_cnt);
			return (0);
		}
		i++;
	}
	if (op && opst[i].opcode == NULL)
	{ fprintf(stderr, "L%d: unknown instruction %s\n", line_cnt, op);
		fclose(file);
		free(content);
		free_stack(*stack);
		exit(EXIT_FAILURE); }
	return (1);
}