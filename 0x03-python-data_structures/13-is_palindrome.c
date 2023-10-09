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
	int i = 1, arr_size = 100000;
	int palin1 = 0, palin2 = i - 1;

	arr[0] = (*head)->n;

	if (*head == NULL)
		free(arr);
		return (1);

	tmp = tmp->next;

	while (tmp != NULL)
	{
		if (i >= arr_size)
		{
			arr_size *= 2;
			arr = realloc(arr, arr_size * sizeof(int));
		}
		arr[i] = tmp->n;
		i++;
		tmp = tmp->next;
	}
	while (palin1 < palin2)
	{
		if (arr[palin1] != arr[palin2])
		{
			free(arr)
			return (0);
		}
		palin1++;
		palin2--;
	}
	free(arr)
	return (1);
}
