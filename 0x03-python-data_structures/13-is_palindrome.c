#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * reverse_listint - Reverses a linked list
 * @head: Pointer to list head node
 *
 * Return: new head of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *curr = *head, *next = NULL;

	while (curr != NULL)
	{
		next = curr->next;
		curr->next = prev;
		prev = curr;
		curr = next;
	}
	*head = prev;
	return (*head);
}

/**
 * is_palindrome - Checks if a linked list is a palindrome
 * @head: double pointer to list head node
 * Return: 1 if palindrome else 0
 */

int is_palindrome(listint_t **head)
{
	if (*head == NULL || (*head)->next == NULL)
		return (1);

	listint_t *slow = *head, *fast = *head;

	while (fast->next != NULL && fast->next->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;
	}
	slow->next = reverse_listint(&(slow->next));

	listint_t *palin1 = *head;
	listint_t *palin2 = slow->next;

	while (palin2 != NULL)
	{
		if (palin1->n != palin2->n)
			return (0);
		palin1 = palin1->next;
		palin2 = palin2->next;
	}
	return (1);
}
