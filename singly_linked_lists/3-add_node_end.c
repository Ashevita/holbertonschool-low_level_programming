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
	list_t *new_node;
	list_t *temp;

	char *new_str;
	int len;

	new_str = strdup(str);
	if (new_str == NULL)
	return (NULL);

	for (len = 0; str[len]; len++)
		;
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		free(new_str);
	return (NULL);
	}
		new_node->str = new_str;
		new_node->len = len;
		new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		temp = *head;
	}
	while (temp->next != NULL)
	{
		temp = temp->next;
		temp->next = new_node;
	}
	return (new_node);
}
