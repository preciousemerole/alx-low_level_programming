#include "lists.h"

/**
 * sum_listint - a function that returns the sum of all the data (n)
 * of a listint_t linked list.
 * @head: first node in linked list
 *
 * Return: sum or if list is empty, return o
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum +=  temp->n;
		temp = temp->next;
	}

	return (sum);
}
