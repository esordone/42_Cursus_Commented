/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esordone <esordone@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 12:57:31 by esordone          #+#    #+#             */
/*   Updated: 2023/02/14 12:57:48 by esordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	ft_reverse_rotate(t_nodo **stack)
{
	int		aux;
	int		new_index;
	t_nodo	*pass;
	t_nodo	*first;

	if (!stack || (*stack)->next == NULL)
		return ;
	pass = last_lst(*stack);
	first = (*stack);
	aux = pass->val;
	new_index = (pass)->index;
	while (pass != NULL)
	{
		if (pass->prev != NULL)
		{
			pass->val = pass->prev->val;
			pass->index = pass->prev->index;
		}
		pass = pass->prev;
	}
	first->val = aux;
	first->index = new_index;
}

void	rrb(t_nodo **stack_b)
{
	ft_reverse_rotate(stack_b);
	write (1, "rrb\n", 4);
}

void	rra(t_nodo **stack_a)
{
	ft_reverse_rotate(stack_a);
	write (1, "rra\n", 4);
}

void	rrr(t_nodo **stack_a, t_nodo **stack_b)
{
	ft_reverse_rotate(stack_a);
	ft_reverse_rotate(stack_b);
	write (1, "rrr\n", 4);
}
