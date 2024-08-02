#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void free_list(list_t *head)
{
	list_t *temp;

while (head != NULL)
{
temp = head;
head = head->next;
free(temp->str);
free(temp);
}
}
