#include "sort.h"

/**
 * insertion_sort_list - sorts a list of integers in ascending order
 * @list: Double pointer to the head of the doubly linked list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current, *inner_curr, *prev, *next;

	if (!list || !*list || !(*list)->next)
		return;

	current = (*list)->next;

	while (current)
	{
		inner_curr = current;

		while (inner_curr->prev && inner_curr->n < inner_curr->prev->n)
		{
			prev = inner_curr->prev;
			next = inner_curr->next;

			if (prev)
				prev->next = next;
			if (next)
				next->prev = prev;

			inner_curr->next = prev;
			inner_curr->prev = prev->prev;

			if (prev->prev)
				prev->prev->next = inner_curr;
			prev->prev = inner_curr;

			if (!inner_curr->prev)
				*list = inner_curr;

			print_list(*list);

			inner_curr = prev;
		}

		current = current->next;
	}
}
