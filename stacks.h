#ifndef _STACKS_H_
#define _STACKS_H_

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

void div_stk(stack_t **head, unsigned int line_cnt);
void mod_stk(stack_t **head, unsigned int line_cnt);
void pall_stk(stack_t **head, unsigned int line_cnt);
void rotr_stk(stack_t **head, __attribute__((unused)) unsigned int line_cnt);
void add_stk(stack_t **head, unsigned int line_cnt);
int execute_stk(char *content, stack_t **stack, unsigned int line_cnt, FILE *file);
void pchar_stk(stack_t **head, unsigned int line_cnt);
void push_stk(stack_t **head, unsigned int line_cnt);
void addnode_stk(stack_t **head, int i);
void free_stack(stack_t *head);
void mul_stk(stack_t **head, unsigned int line_cnt);
void nop_stk(stack_t **head, unsigned int line_cnt);
void pint_stk(stack_t **head, unsigned int line_cnt);
void pop_stk(stack_t **head, unsigned int line_cnt);
void pstr_stk(stack_t **head, unsigned int line_cnt);
void queue_stk(stack_t **head, unsigned int line_cnt);
void rotl_stk(stack_t **head,  __attribute__((unused)) unsigned int line_cnt);
void sub_stk(stack_t **head, unsigned int line_cnt);
void swap_stk(stack_t **head, unsigned int line_cnt);


#endif
