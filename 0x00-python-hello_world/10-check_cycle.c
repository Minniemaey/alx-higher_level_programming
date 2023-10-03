#include "lists.h"

/**
 * check_cycle - checks if a singly linked list has a cycle in it
 * @list: pointer to linked list to be checked
 * Return: 0 if no cycle, 1 if there is a cycle
 */

int check_cycle(listint_t *list)
{
	listint_t *old = list, *new = list;

	if (list == NULL)
		return (0);
	while (old && new)
	{
		if (new->next == NULL)
			return (0);
		old = old->next;
		new = new->next->next;
		if (old == new)
			return (1);
	}
	return (0);
}
