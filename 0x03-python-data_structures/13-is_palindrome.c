#include "lists.h"

/**
 * is_palindrome - check if linked list is palindromic
 * @head: double pointer to list head node
 * Return: 1 if palindrome else 0
 */

int is_palindrome(listint_t **head)
{
	listint_t *tmp = *head;
	int *arr = malloc(arr_size * sizeof(int));
	int i = 0, arr_size = 1000;
	int palin1 = 0, palin2 = i - 1;

	arr[0] = (*head)->n;

	if (*head == NULL || (*head)->next == NULL)
		return (1);
	if (arr == NULL)
		return (0);

	while (tmp != NULL)
	{
		arr[i] = tmp->n;
		i++;
		if (i == arr_size)
		{
			arr_size *= 2;
			arr = realloc(arr, arr_size * sizeof(int));
			if (arr == NULL)
				exit(EXIT_FAILURE);
		}
		tmp = tmp->next;
	}
	for (; palin1 < palin2; palin1++, palin2--)
	{
		if (arr[palin1] != arr[palin2])
			return (0);
	}
	return (1);
}
