/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esordone <esordone@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 10:14:10 by esordone          #+#    #+#             */
/*   Updated: 2023/02/14 10:14:33 by esordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	ft_rotate(t_nodo **stack)
{
	int		aux;
	t_nodo	*pass;
	t_nodo	*last;
	int		new_index;

	if (!stack || (*stack)->next == NULL)
		return ;
	pass = (*stack);
	aux = (*stack)->val;
	new_index = (*stack)->index;
	while (pass != NULL)
	{
		if (pass->next != NULL)
		{
			pass->val = pass->next->val;
			pass->index = pass->next->index;
		}
		pass = pass->next;
	}
	last = last_lst(*stack);
	last->val = aux;
	last->index = new_index;
}

void	rb(t_nodo **stack_b)
{
	ft_rotate(stack_b);
	write (1, "rb\n", 3);
}

void	ra(t_nodo **stack_a)
{
	ft_rotate(stack_a);
	write (1, "ra\n", 3);
}

void	rr(t_nodo **stack_a, t_nodo **stack_b)
{
	ft_rotate(stack_a);
	ft_rotate(stack_b);
	write (1, "rr\n", 3);
}
