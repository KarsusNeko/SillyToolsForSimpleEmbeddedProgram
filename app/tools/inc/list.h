#ifndef __LIST_H
#define __LIST_H

#ifdef __cplusplus
extern "C"
{
#endif

typedef struct _list_node
{
	struct _list_node*	next;
} list_node;

typedef struct _list
{
	list_node*	head;
	list_node*	tail;
} list;

void list_init(list* list);
void list_deinit(list* list);

#ifdef __cplusplus
}
#endif

#endif // __LIST_H