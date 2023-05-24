/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_params.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esordone <esordone@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 12:10:59 by esordone          #+#    #+#             */
/*   Updated: 2023/03/07 12:11:42 by esordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	sort_params(int argc, t_nodo **stack_a, t_nodo **stack_b)
{
	int	len;

	len = ft_len_lst((*stack_a));
	if (len <= 5)
		sort_five(argc, stack_a, stack_b);
	if (len > 5 && len <= 20)
		big_sort(stack_a, stack_b, 2);
	if (len > 20 && len <= 100)
		big_sort(stack_a, stack_b, 5);
	if (len > 100 && len <= 250)
		big_sort(stack_a, stack_b, 6);
	if (len > 250 && len <= 500)
		big_sort(stack_a, stack_b, 7);
}
