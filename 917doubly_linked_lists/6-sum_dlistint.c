#include "lists.h"

/**
 * sum_dlistint - returns the sum of the nodes
 * @head: head pointer
 * Return: retruns the sum of the nodes
 */

int sum_dlistint(dlistint_t *head)
{
	int res = 0;

	if (!head)
		return (0);
	for (; head; head = head->next)
		res += head->n;
	return (res);
}
