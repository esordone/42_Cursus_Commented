/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esordone <esordone@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 16:35:59 by esordone          #+#    #+#             */
/*   Updated: 2022/12/15 17:57:05 by esordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	valid(char c, int base)
{
	char digits[17] = "0123456789abcdef";
	char digits_maj[17] = "0123456789ABCDEF";

	// while (base--) 
	// 1. mira el valor
	// 2. despres li resta 1
	//
	// while (--base)
	// 1. primer resta 1
	// 2. despres mira el valor
	while (base)
	{
		base--;
		if (digits[base] == c || digits_maj[base] == c)
			return (1);
	}
	return (0);
}

int		ft_value_of(char c)
{
	if (c >= '0' && c <= '9')
		return (c - '0');
	else if (c >= 'a' && c <= 'f')
		return (c - 'a' + 10);
	else if (c >= 'A' && c <= 'F')
		return (c - 'A' + 10);
	return (0);
}

int	ft_atoi_base(const char *str, int str_base)
{
	char	*s1;
	int		signe;
	int		result;
	int 	i;

	signe = 1;
	s1 = (char *)str;
	i = 0;
	if (!*str)
		return (0);
	while (s1[i] == ' ' || s1[i] == '\n' || s1[i] == '\t' || s1[i] == '\v' || s1[i] == 'r')
		i++;
	if (s1[i] == '+' || s1[i] == '-')
	{
		if (s1[i] == '-')
		{
			signe = -1;
		}
		i++;
	}
	result = 0;
	while (valid(str[i], str_base))
	{
		result = result * str_base + ft_value_of(s1[i]);
		i++;
	}
	result = result * signe;
	return (result);
}
/*
int	main (void)
{
	const char	*str;
	int			base;

	str = "34aa0213";
	base = 16;
	printf("El resultat es |%d|\n", ft_atoi_base(str, base));
	return (0);
}*/
