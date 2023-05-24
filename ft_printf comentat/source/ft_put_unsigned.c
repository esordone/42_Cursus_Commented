/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_unsigned.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esordone <esordone@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 16:38:41 by esordone          #+#    #+#             */
/*   Updated: 2022/10/24 16:30:32 by esordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	unlenght(unsigned int n)
{
	int	len;

	len = 0;
	if (n < 0)
		n = n * (-1);
	if (n < 10)
		return (1);
	while (n)
	{
		//printf("n|%d|, ", n);
		n = n / 10;
		len++;
	}
	//printf("\nEl len de n es |%d|\n", len);
	return (len);
}

char	*ft_unitoa(unsigned int n, char *r)
{
	int		num;

	num = unlenght(n);
	r[num] = '\0';
	if (n == 0)
		r[0] = '0';
	if (n < 0)
		n = n * (-1);
	//printf("Passem del signe |%d|\n", n);
	while (n)
	{
		num--;
		r[num] = (n % 10) + '0';
		n = n / 10;
	}
	//printf("Ara n val |%d\n|", n);
	while (r[num])
	{
		//printf("El valor de r es |%c|\n", r[num]);
		num++;
	}
	return (r);
}

int	ft_put_unsigned(unsigned int n)
{
	char 		*res;
	int			len;
	char		*mem;
	int			num;

	num = unlenght(n);
	mem = (char *)malloc(sizeof(char) * (num + 1));
	if (!mem)
		return (-1);
	res = ft_unitoa(n, mem);
	len = ft_putstr(res);
	free(mem);
	return (len);
}
/*
int	main(void)
{
	printf("El resultat final es |%d|\n", ft_put_unsigned(-12));
	return (0);
}*/
