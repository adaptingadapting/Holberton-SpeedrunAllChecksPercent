#include "lists.h"

/**
 * sum_listint - sums the info of a listint list
 * @head: pointer to head of list
 * Return: the sum of the elements of the list
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	for (; head; head = head->next)
		sum += head->n;
	return (sum);
}
