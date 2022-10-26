#include "lists.h"
#include <stddef.h>
#include <stdio.h>

/**
 * print_listint_safe - function that prints a listint_t linked list.
 * @head: list of type listint_t to print
 *
 * Return: the number of nodes in the list
 * or if function fails, exit the program with status 98
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t num = 0;
	long int diff;

	while (head)
	{
		diff = head - head->next;
		num++;
		printf("[%p] %d\n", (void *)head, head->n);
		if (diff > 0)
			head = head->next;
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
	}

	return (num);

}
