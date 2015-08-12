#include "timer_list.h"
#include <string.h>

int timer_cmp(list_node* ln1, list_node* ln2)
{
	timer* tm1;
	timer* tm2;

	return (strcmp(tm1->name, tm2->name));
}

void timer_list_init(timer_list* tl)
{
	list_init(tl);
}

int	timer_remove(timer_list* tl, char* name)
{
	timer tmp;
	strcpy(tmp.name, name);
	timer
}

void timer_append(timer_list* tl, timer* timer)
{}

void timer_list_clear(timer_list* tl)
{}