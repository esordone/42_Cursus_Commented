/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esordone <esordone@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 16:01:08 by esordone          #+#    #+#             */
/*   Updated: 2023/02/14 16:01:42 by esordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	sort_three(t_nodo **stack)
{
	t_nodo	*first;

	first = (*stack);
	if (is_sorted(first) == 1)
		return ;
	if (first->index > first->next->index
		&& first->index == ft_index_max(stack))
		ra(stack);
	else if (first->next->index > first->index)
		rra(stack);
	if (first->next->index < first->index)
		sa(stack);
}

int	get_min_pos(t_nodo **stack, int min_index)
{
	t_nodo	*aux;

	aux = *stack;
	while (aux != NULL)
	{
		if (aux->index == min_index)
			return (aux->pos);
		aux = aux->next;
	}
	return (0);
}

static void	smart_rotation(t_nodo **stack)
{
	int		half;
	int		num;

	num = ft_index_min(stack);
	get_min_pos(stack, num);
	half = ft_divide(stack);
	if (get_min_pos(stack, num) <= half)
		ra(stack);
	else
		rra(stack);
}

void	sort_five(int argc, t_nodo **stack_a, t_nodo **stack_b)
{
	t_nodo	*first;
	int		second_index;

	first = (*stack_a);
	second_index = ft_index_min(stack_a) + 1;
	if (is_sorted(first) == 1)
		return ;
	if (argc - 1 <= 3)
	{
		sort_three(stack_a);
		return ;
	}
	ft_min_first(stack_a);
	pb(stack_a, stack_b);
	first = (*stack_a);
	while (first->index != second_index)
		smart_rotation(stack_a);
	pb(stack_a, stack_b);
	sort_three(stack_a);
	pa(stack_b, stack_a);
	pa(stack_b, stack_a);
}
