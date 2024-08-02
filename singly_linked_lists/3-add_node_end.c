#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * add_node_end - function for add node at the end
 * @head: pointer
 * @str: pointer
 * Return: nomber of a node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));
	list_t *temp = *head;

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

        new_node->next = NULL;

        if (*head == NULL)
        {
            *head = new_node;
        }
        else
        {
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = new_node
            
        }
    return(new_node);
}
