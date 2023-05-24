/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esordone <esordone@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 12:15:59 by esordone          #+#    #+#             */
/*   Updated: 2023/01/24 12:16:17 by esordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_nodo	*ft_min(t_nodo **a)
{
	int		min;
	t_nodo	*tmp;
	t_nodo	*lst_min;

	min = 0;
	tmp = *a;
	lst_min = NULL;
	if (!tmp)
		return (NULL);
	while (tmp)
	{
		if ((tmp->index == -1) && (!min || tmp->val < lst_min->val))
		{
			lst_min = tmp;
			min = 1;
		}
		tmp = tmp->next;
	}
	return (lst_min);
}

void	ft_index(t_nodo **a)
{
	t_nodo	*lst;
	int		index;

	index = 0;
	lst = ft_min(a);
	while (lst)
	{
		lst->index = index++;
		lst = ft_min(a);
	}
}

int	is_sorted(t_nodo *a)
{
	while (a->next)
	{
		if (a->val > a->next->val)
			return (0);
		a = a->next;
	}
	return (1);
}
