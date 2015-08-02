#include "list.h"

void list_init(list* l)
{
	l->head	= NULL;
	l->tail	= NULL;
}

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