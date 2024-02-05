#include "stacks.h"

/**
 * rotr_stk - turns the stack to the rear
 * @head: points to the head of stack
 * @line_cnt: counts number of lines
 * Return: none
 */

void rotr_stk(stack_t **head, __attribute__((unused)) int line_cnt)
{
	stack_t *dup;

	dup = *head;
	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	while (dup->next)
	{
		dup = dup->next;
	}
	dup->next = *head;
	dup->prev->next = NULL;
	dup->prev = NULL;
	(*head)->prev = dup;
	(*head) = dup;
}
