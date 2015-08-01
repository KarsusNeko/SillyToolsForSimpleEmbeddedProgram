#include "queue.h"

#ifdef __cplusplus
extern "C"
{
#endif

void queue_init(queue* q)
{
	q->head	= NULL;
	q->tail	= NULL;

	q->size	= 0;
}

void queue_push(queue* q, node* nd)
{
	nd->next = NULL;
	if (q->tail	!= NULL)
		q->tail->next = nd;
	q->tail = nd;


	if (q->head == NULL)
		q->head = nd;

	q->size++;
}

node* queue_pop(queue* q)
{
	node*	tmp;
	
	tmp = q->head;
	if (q->head != NULL) {
		q->head = q->head->next;
		q->size--;
	}

	return tmp;
}

node* queue_top(queue* q)
{
	return q->head;
}

int queue_size(queue* q)
{
	return q->size;
}

#ifdef __cplusplus
}
#endif
