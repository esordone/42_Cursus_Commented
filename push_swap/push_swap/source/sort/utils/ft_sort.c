/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esordone <esordone@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 13:24:09 by esordone          #+#    #+#             */
/*   Updated: 2023/02/16 13:25:04 by esordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../push_swap.h"

int	min(t_nodo **stack)
{
	int		index_min;
	int		min;
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
	while ((*stack)->next)
	{
		if ((*stack)->index == index_min)
		{
			min = (*stack)->val;
		}
		(*stack) = (*stack)->next;
	}
	return (min);
}

int	ft_len_lst(t_nodo *stack)
{
	int	i;

	i = 0;
	while (stack != NULL)
	{
		stack = stack->next;
		i++;
	}
	return (i);
}

int	ft_max(t_nodo **stack)
{
	int		index_max;
	int		max;
	t_nodo	*lst;

	lst = *stack;
	index_max = lst->index;
	if (!(*stack))
		return (0);
	while (lst)
	{
		if (lst->index > index_max)
			index_max = lst->index;
		lst = lst->next;
	}
	while ((*stack)->next)
	{
		if ((*stack)->index == index_max)
		{
			max = (*stack)->val;
		}
		(*stack) = (*stack)->next;
	}
	return (max);
}
