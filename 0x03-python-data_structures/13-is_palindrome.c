#include "lists.h"

/**
 * is_palindrome - check if linked list is palindromic
 * @head: double pointer to list head node
 * Return: 1 if palindrome else 0
 */

int is_palindrome(listint_t **head)
{
	listint_t *tmp = *head;
	int *arr = malloc(100000 * sizeof(int));
	int i = 0, arr_size = 0;
	int palin1 = 0, palin2 = i - 1;

	arr[0] = (*head)->n;

	if (*head == NULL || (*head)->next == NULL)
		return (1);

	tmp = tmp->next;

	while (tmp != NULL)
	{
		arr_size = (i + 1) * sizeof(int);
		arr = realloc(arr, arr_size);
		arr[i] = tmp->n;
		i++;
		tmp = tmp->next;
	}
	for (; palin1 < palin2; palin1++, palin2--)
	{
		if (arr[palin1] != arr[palin2])
			return (0);
	}
	return (1);
}
