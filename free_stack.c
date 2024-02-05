#include "monty.h"
/**
* free_stack - clears a doubly linked list
* @head: points to the head of stack
*/
void free_stack(stack_t *head)
{
	stack_t *join;

	join = head;
	while (head)
	{
		join = head->next;
		free(head);
		head = join;
	}
}
