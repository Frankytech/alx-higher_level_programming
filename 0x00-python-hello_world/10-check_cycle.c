#include <stdio.h>
#include "list.h"

/**
 *  check_cycle.c- checks if a linked list contains a cycle
 *  @list : the list to check
 *
 *  return 1 if list has a cycle and 0 if it doesnt
 *
 */
 
int check_cycle(listint_t *list)
{
	listint_t *slow = list;
	listint_t *fast = list;

	if (!list)
		return (0);

	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
			return (1);
	}


	return (0);
}
