#include "stacks.h"
/**
  *stk_rotr- rotates the stack to the bottom
  *@head: stack head
  *@line_cnt: line_number
  *Return: none
 */
void stk_rotr(stack_t **head, __attribute__((unused)) unsigned int line_cnt)
{
	stack_t *copy;

	copy = *head;
	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	while (copy->next)
	{
		copy = copy->next;
	}
	copy->next = *head;
	copy->prev->next = NULL;
	copy->prev = NULL;
	(*head)->prev = copy;
	(*head) = copy;
}