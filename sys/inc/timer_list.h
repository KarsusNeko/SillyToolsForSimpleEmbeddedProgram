#ifndef __TIMER_LIST_H
#define	__TIMER_LIST_H

#include "list.h"

typedef enum _timer_mode
{
	TIMER_INSTANT;
	TIMER_PERIODIC
} timer_mode;

typedef struct _timer
{
	_timer*		next;
	mode		mod;
	long		ticks;
	int			(*task)(void* arg);
	void*		arg;
	char		name[7];
} timer;

typedef struct _timer_list
{
	timer*		head;
	timer*		tail;	
} timer_list;

#endif // __TIMER_LIST_H