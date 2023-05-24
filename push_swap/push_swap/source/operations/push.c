/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esordone <esordone@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 13:18:05 by esordone          #+#    #+#             */
/*   Updated: 2023/02/01 13:19:24 by esordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

static void	update_pos(t_nodo **stack)
{
	t_nodo	*aux;
	int		new_pos;

	aux = *stack;
	new_pos = 0;
	while (aux != NULL)
	{
		aux->pos = new_pos;
		new_pos++;
		aux = aux->next;
	}
}

void	ft_push(t_nodo **stack_a, t_nodo **stack_b)
{
	t_nodo	*tmp;
	t_nodo	*aux;

	if (!stack_a ||!*stack_a)
		return ;
	tmp = (*stack_a);
	*stack_a = tmp->next;
	ft_add_lst_front(stack_b, tmp);
	*stack_b = tmp;
	aux = last_lst(*stack_a);
	if (!aux)
		return ;
	(*stack_a)->prev = NULL;
	aux->next = NULL;
	update_pos(stack_a);
}

void	ft_push_a(t_nodo **stack_b, t_nodo **stack_a)
{
	t_nodo	*tmp;
	t_nodo	*aux;

	if (!stack_b)
		return ;
	tmp = (*stack_b);
	*stack_b = tmp->next;
	ft_add_lst_front(stack_a, tmp);
	*stack_a = tmp;
	aux = last_lst(*stack_b);
	if (!aux)
		return ;
	(*stack_b)->prev = NULL;
	aux->next = NULL;
	update_pos(stack_b);
}

void	pb(t_nodo **stack_a, t_nodo **stack_b)
{
	ft_push(stack_a, stack_b);
	write (1, "pb\n", 3);
}

void	pa(t_nodo **stack_b, t_nodo **stack_a)
{
	ft_push_a(stack_b, stack_a);
	write (1, "pa\n", 3);
}
