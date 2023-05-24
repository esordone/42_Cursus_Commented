/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_divide.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esordone <esordone@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 17:04:49 by esordone          #+#    #+#             */
/*   Updated: 2023/02/22 17:05:19 by esordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../push_swap.h"

int	ft_index_max(t_nodo **stack)
{
	int		index_max;
	t_nodo	*lst;

	if (!(*stack))
		return (0);
	lst = *stack;
	index_max = lst->index;
	while (lst)
	{
		if (lst->index > index_max)
			index_max = lst->index;
		lst = lst->next;
	}
	return (index_max);
}

int	ft_divide(t_nodo **stack)
{
	t_nodo	*first;
	int		res;

	first = (*stack);
	res = ft_index_max(stack) / 2;
	if (ft_index_max(stack) % 2 != 0)
		res = res + 1;
	return (res);
}
