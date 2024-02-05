#include "stacks.h"
/**
  *stk_rotl- rotates the stack to the top
  *@head: stack head
  *@line_cnt: line_number
  *Return: none
 */
void stk_rotl(stack_t **head,  __attribute__((unused)) unsigned int line_cnt)
{
	stack_t *tmp = *head, *join;

	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	join = (*head)->next;
	join->prev = NULL;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = *head;
	(*head)->next = NULL;
	(*head)->prev = tmp;
	(*head) = join;
}