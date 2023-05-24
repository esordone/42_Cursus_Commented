/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min_first.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esordone <esordone@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 16:20:16 by esordone          #+#    #+#             */
/*   Updated: 2023/02/23 16:21:29 by esordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../push_swap.h"

int	ft_index_min(t_nodo **stack)
{
	int		index_min;
	t_nodo	*lst;

	lst = *stack;
	index_min = lst->index;
	if (!(*stack))
		return (0);
	while (lst)
	{
		if (lst->index < index_min)
			index_min = lst->index;
		lst = lst->next;
	}
	return (index_min);
}

void	ft_min_first(t_nodo **stack)
{
	t_nodo	*first;

	first = (*stack);
	while (first->index != ft_index_min(stack))
		ra(stack);
}
