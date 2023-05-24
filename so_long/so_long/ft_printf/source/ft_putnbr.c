/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esordone <esordone@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 11:31:57 by esordone          #+#    #+#             */
/*   Updated: 2022/10/24 18:39:50 by esordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

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

char	*ft_itoa(int n, char *r)
{
	int		num;

	num = lenght(n);
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

int	ft_putnbr(int n)
{
	char		*res;
	int			len;
	char		*mem;
	int			num;

	num = lenght(n);
	mem = (char *)malloc(sizeof(char) * (num + 1));
	if (!mem)
		return (-1);
	res = ft_itoa(n, mem);
	len = ft_putstr(res);
	free(mem);
	return (len);
}
