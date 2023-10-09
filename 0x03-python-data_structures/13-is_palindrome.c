#include "lists.h"

/**
 * is_palindrome - check if linked list is palindromic
 * @head: double pointer to list head node
 * Return: 1 if palindrome else 0
 */

int is_palindrome(listint_t **head)
{
	listint_t *tmp = *head;
	int i = 0, len = 0;
	int *arr = malloc(len * sizeof(int));
	int palin1 = 0, palin2 = i - 1;

	if (*head == NULL || (*head)->next == NULL)
		return (1);
	if (arr == NULL)
		return (0);

	while (tmp != NULL)
	{
		len++;
		tmp = tmp->next;
	}

	tmp = *head;
	for (i = 0; i < len / 2; i++)
	{
		if (arr[i] != arr[len - i -1])
			return (0);
	}
	return (1);
}
