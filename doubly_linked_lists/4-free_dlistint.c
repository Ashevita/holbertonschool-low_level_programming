#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - Libère une liste doublement chaînée
 * @head: Pointeur vers le début de la liste
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	dlistint_t *next;

	current = head;

	while (current != NULL)
	{
	    next = current->next;
	    free(current);
	    current = next;
	}
}
