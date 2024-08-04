#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - Imprime tous les éléments d'une liste dlistint_t
 * @h: Pointeur vers le début de la liste
 *
 * Retourne: Le nombre de nœuds dans la liste
 */
size_t print_dlistint(const dlistint_t *h)
{
    size_t count = 0;

    while (h != NULL)
    {
        count++;
        h = h->next;
    }

    return (count);
}
