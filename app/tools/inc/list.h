#ifndef _LIST_H
#define _LIST_H

typedef struct _list_node
{
	struct _list_node*	next;
} list_node;

typedef struct _list
{
	list_node*			head;
	list_node*			tail;
} list;

void list_init(list* l);
//void list_free(list* l);
void list_append(list_node* ln);
//void list_remove();

#endif // __LIST_H