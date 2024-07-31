#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * add_node - Ajoute un nouveau nœud au début d'une liste chaînée
 * @head: double pointeur vers la tête de la liste
 * @str: chaîne de caractères à ajouter dans le nouveau nœud
 *
 * Return: adresse du nouvel élément, ou NULL si l'ajout échoue
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));
	size_t n;

		if (new_node == NULL)
		{
			return (NULL);
		}
		new_node->str = strdup(str);
		if (new_node->str == NULL)
		{
			free(new_node);
			return (NULL);
		}

		for (n = 0; str[n]; n++)
			;

		new_node->len = n;
		new_node->next = *head;
		*head = new_node;

		return (new_node);
}
