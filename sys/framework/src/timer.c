#include "timer.h"
#include <string.h>

timer_list tl;

int timer_create(timer* timer,
				const char* name,
				unsigned long tick,
				timer_handler hndlr,
				void* arg)
{
	if(tick < ticks)
		return -1;

	timer->ticks	= ticks;
	timer->task		= hndlr;
	timer->arg		= arg;
	strcpy(timer->name, name);
	
	return ticks;
}

void timer_register(timer* timer)
{
	timer_list_append(&tl, timer);
}

void timer_unregister(char* name)
{
	timer_list_remove(&tl, name);
}

void timer_init()
{
	timer_list_init(&tl);
}

void timer_workflow()
{
	timer* curs;

	curs = (timer*)&tl->head;

	while(curs != NULL)
	{
		if( curs->ticks <= ticks )
		{
			curs->task(curs->arg);
			curs = timer_list_remove(&tl, curs);
		}
		else
		{
			curs = curs->next;
		}
	}
}