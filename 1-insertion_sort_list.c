#include "sort.h"
/**
 * swap_nodes - funtion that swaps nodes for sorting
 * @list: first input
 * @a: second data
 * @b: third input
 */
void swap_nodes(listint_t **list, listint_t *a, listint_t *b)
{
if (a->prev)
a->prev->next = b;
if (b->next)
b->next->prev = a;
a->next = b->next;
b->prev = a->prev;
a->prev = b;
b->next = a;
if (!a->prev)
*list = b;
}
/**
 * insertion_sort_list - function to oerform insertion algorithm
 * @list: list being sorted
 */
void insertion_sort_list(listint_t **list)
{
listint_t *current;

current = (*list)->next;
if (*list == NULL || (*list)->next == NULL)
return;
while (current != NULL)
{
listint_t *temp = current;
while (temp->prev != NULL && temp->n < temp->prev->n)
{
swap_nodes(list, temp->prev, temp);
print_list(*list);
}
current = current->next;
}
}

