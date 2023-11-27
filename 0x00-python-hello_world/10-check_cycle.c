#include "lists.h"
/**
 * check_cycle - the function checks  a linked list contains a cycle.
 * @list: A linked list to checked.
 * Return: returns 1 if the list has a cycle, else 0.
 */
int check_cycle(listint_t *list)
{
listint_t *slow = list;
listint_t *fast = list;

	if (!list)
	{
		return (0);
	}
	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
		{
			return (1);
		}
	}
	return (0);
}
