#ifndef _LIST_H
#define _LIST_H

enum {RMV_SUCC, LST_EMPTY, NO_ELEM};

typedef struct _list_node
{
	struct _list_node*	next;
} list_node;

typedef struct _list
{
	list_node*			head;
	list_node*			tail;
} list;

typedef int (*compar)(list_node* ln1, list_node* ln2);

void list_init(list* l);
//void list_free(list* l);
list_node* list_find(list* l, list_node* ln);
void list_append(list* l, list_node* ln);
int list_remove(list* l, list_node* ln, compar func);

#endif // __LIST_H