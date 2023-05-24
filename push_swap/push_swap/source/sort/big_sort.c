/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esordone <esordone@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 12:38:39 by esordone          #+#    #+#             */
/*   Updated: 2023/03/07 12:47:47 by esordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	init_struct_data(t_nodo **stack_a, t_data *data, int chunks)
{
	data->num_elements = 0;
	data->count = 1;
	data->start = 0;
	data->cut = ft_len_lst((*stack_a)) / chunks;
	data->more_cut = data->cut;
}

void	move_x_chunks_to_b(t_nodo **stack_a, t_nodo **stack_b, int chunks)
{
	t_data	data;

	init_struct_data(stack_a, &data, chunks);
	if (is_sorted((*stack_a)) == 1)
		return ;
	while (data.count++ <= chunks)
	{
		while (data.num_elements < data.cut)
		{
			if ((*stack_a)->index < data.cut)
			{
				pb(stack_a, stack_b);
				if ((*stack_b)->index <= ((data.cut + data.start) / 2))
					rb(stack_b);
				data.num_elements++;
			}
			else
				ra(stack_a);
		}
		ft_index(stack_a);
		data.start = data.cut;
		data.cut = data.cut + data.more_cut;
	}
	while (ft_len_lst(*stack_a))
		pb(stack_a, stack_b);
}

void	big_sort(t_nodo **stack_a, t_nodo **stack_b, int chunks)
{
	move_x_chunks_to_b(stack_a, stack_b, chunks);
	put_in_a(stack_a, stack_b);
}
