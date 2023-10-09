#include "lists.h"

/**
 * reverse_list - function that reverses a linked list
 * @head: ptr to head node
 * Return: ptr to new list
 */
void reverse_list(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *curr = *head;
	listint_t *next = NULL;

	while (curr)
	{
		next = curr->next;
		curr->next = prev;
		prev = curr;
		curr = next;
	}

	*head = prev;
}

/**
 * is_palindrome - checks if linked list is palindromic
 * @head: double pointer to head node
 * Return: 1 if palindrome else 0
 */
int is_palindrome(listint_t **head)
{
	listint_t *ptr1 = *head, *ptr2 = *head, *tmp = *head, *rev = NULL;

	if (*head == NULL || (*head)->next == NULL)
		return (1);

	while (1)
	{
		ptr1 = ptr1->next->next;
		if (!ptr1)
		{
			rev = ptr2->next;
			break;
		}
		if (!ptr1->next)
		{
			rev  = ptr2->next->next;
			break;
		}
		ptr2 = ptr2->next;
	}

	reverse_list(&rev);

	while (rev && tmp)
	{
		if (tmp->n == rev->n)
		{
			rev = rev->next;
			tmp = tmp->next;
		}
		else
			return (0);
	}

	if (!rev)
		return (1);

	return (0);
}
