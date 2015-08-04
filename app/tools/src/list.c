#include "list.h"

void list_init(list* l)
{
	l->head	= NULL;
	l->tail	= NULL;
}

list_node* list_find(list* l, list_node* ln)
{}

void list_append(list* l, list_node* ln)
{
	if(l->head == NULL && l->tail == NULL)
	{
		l->head			= ln;
		l->tail			= ln;
	}
	else
	{
		ln->next		= NULL;
		l->tail->next	= ln;
		l->tail			= ln;
	}
}

int list_remove(list* l, list_node* ln, compar func)
{
	list* tmp = l->head;
	if(tmp == NULL)
		return 2;

	while(tmp != NULL)
	{
		if(compar(tmp->next, ln))
		{
			tmp = tmp->next;
		}
		else
		{
		}
	}
}