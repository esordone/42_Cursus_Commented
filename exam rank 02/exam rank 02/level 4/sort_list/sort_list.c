#include "list.h"
#include <unistd.h>
#include <stdio.h>

/*typedef struct s_list t_list;

struct s_list
{
	int     data;
	t_list  *next;
};*/

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
	t_list	*first;
	t_list	*tmp;

	first = lst;
	while (lst->next)
	{
		if (cmp(lst->data, lst->data->next == 0))
		{
			tmp->data = lst->data;
		   	lst->data = lst->next->data;
			lst->next->data = tmp->data;	
		}
		else
			lst = lst->next;
	}
	return (first);
}
