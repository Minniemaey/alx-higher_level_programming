#include "lists.h"

/**
 * is_palindrome - checks if a linked list is a palindrome
 * @head: double pointer to list head node
 * Return: 1 if palindrome else 0
 */

int is_palindrome(listint_t **head)
{
	listint_t *ptr1 = *head, *ptr2 = *head, *curr, *prev;
	int palin = 0;

	while (ptr2 != NULL && ptr2->next != NULL)
	{
		ptr2 = ptr2->next->next;
		ptr1 = ptr1->next;
	}
	curr = ptr1;
	prev = NULL;
	while (curr)
	{
		ptr2 = curr->next;
		curr->next = prev;
		prev = curr;
		curr = fast;
	}
	ptr2 = *head;
	curr = prev;
	while (prev)
	{
		if (ptr2->n != prev->n)
		{
			palin = 1;
			break;
		}
		ptr2 = ptr2->next;
		prev = prev->next;
	}
	prev = NULL;
	while (curr)
	{
		ptr2 = curr->next;
		curr->next = prev;
		prev = curr;
		curr = ptr2;
	}
	return (!palin);
}
