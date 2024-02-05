#include "stacks.h"
/**
  *rotl_stk- turns the stack to the top
  *@head: points to the head of stack
  *@line_cnt: counts number of lines
  *Return: none
 */
void rotl_stk(stack_t **head,  __attribute__((unused)) unsigned int line_cnt)
{
	stack_t *temp = *head, *join;

	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	join = (*head)->next;
	join->prev = NULL;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = *head;
	(*head)->next = NULL;
	(*head)->prev = temp;
	(*head) = join;
}
