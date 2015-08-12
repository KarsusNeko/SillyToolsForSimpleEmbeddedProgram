#include "dev_list.h"

void dev_list_init(dev_list* dl)
{
	list_init(dl);
}

void dev_list_clear(dev_list* dl)
{}


void dev_list_append(dev_list* dl, dev_node* dn)
{}

dev_node* dev_list_find(dev_list* dl, const char* dev_name)
{}

dev_node* dev_list_remove(dev_list* dl, const char* dev_name)
{}