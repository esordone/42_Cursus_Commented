/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_first.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esordone <esordone@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 11:07:19 by esordone          #+#    #+#             */
/*   Updated: 2023/03/22 11:07:35 by esordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../push_swap.h"

int	get_pos(t_nodo **stack, int search_num)
{
	t_nodo	*aux;
	int		pos;

	pos = 0;
	aux = *stack;
	while (aux != NULL)
	{
		if (aux->index == search_num)
			return (pos);
		aux = aux->next;
		pos++;
	}
	return (0);
}

int	smart_rotate(t_nodo **stack, int search_num)
{
	int	half;

	half = (ft_len_lst(*stack) / 2);
	if (get_pos(stack, search_num) <= half)
		return (1);
	else
		return (0);
}

void	put_number_in_top(t_nodo **stack, int search_num)
{
	int	dir;

	dir = smart_rotate(stack, search_num);
	while ((*stack)->index != search_num)
	{
		if (dir == 1)
			rb(stack);
		else
			rrb(stack);
	}
}

void	put_in_a(t_nodo **stack_a, t_nodo **stack_b)
{
	int		len;
	int		num;

	len = ft_len_lst(*stack_b);
	num = ft_index_max(stack_b);
	while (len > 0)
	{
		put_number_in_top(stack_b, num);
		pa(stack_b, stack_a);
		len = ft_len_lst(*stack_b) + 1;
		num--;
		len--;
	}
}
