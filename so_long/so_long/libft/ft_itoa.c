/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esordone <esordone@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 14:44:46 by esordone          #+#    #+#             */
/*   Updated: 2022/10/10 14:06:34 by esordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	maxnum(int n)
{
	if (n < 0)
		n = -n;
	return (n);
}

int	lenght(int n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		len++;
	}
	while (n)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*r;
	int		num;

	num = lenght(n);
	r = (char *)malloc(sizeof(char) * (num + 1));
	if (!r)
		return (NULL);
	r[num] = '\0';
	if (n == 0)
		r[0] = '0';
	if (n < 0)
	{
		r[0] = '-';
	}
	while (n)
	{
		num--;
		r[num] = maxnum(n % 10) + '0';
		n = n / 10;
	}
	return (r);
}
