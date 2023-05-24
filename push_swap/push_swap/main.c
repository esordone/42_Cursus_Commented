/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esordone <esordone@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 15:37:13 by esordone          #+#    #+#             */
/*   Updated: 2023/03/21 12:54:05 by esordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	init_stacks(t_nodo **a, int argc, char **argv)
{
	t_nodo	*nodo;
	int		i;
	int		n;

	i = 1;
	n = 0;
	while (n++ < (argc - 1))
	{
		if (!a)
			*a = new_lst(ft_atoi(argv[i]), i);
		else
		{
			nodo = new_lst(ft_atoi(argv[i]), i);
			add_lst_back(a, nodo);
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	t_nodo	*a;
	t_nodo	*b;

	a = NULL;
	if (argc < 2)
		return (0);
	else
	{
		b = NULL;
		if (valid_input(argc, argv) == 1)
		{
			init_stacks(&a, argc, argv);
			ft_index(&a);
			sort_params(argc, &a, &b);
			ft_clear_lst(&a);
			ft_clear_lst(&b);
		}
	}
	return (0);
}
