#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct dlistint_s - Doubly linked list node structure
 * @n: Integer value stored in the node
 * @prev: Pointer to the previous node in the doubly linked list
 * @next: Pointer to the next node in the doubly linked list
 */
typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;

/* Function prototypes */
size_t print_dlistint(const dlistint_t *h);
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);
void free_dlistint(dlistint_t *head);
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);
#endif /* LISTS_H */
