/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esordone <esordone@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 10:57:33 by esordone          #+#    #+#             */
/*   Updated: 2023/05/10 11:31:31 by esordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

/*int num(int n)
{
	char digit;

	digit = 0;
	if (n >= 10)
		num (n / 10);
	digit = (n % 10) + '0';
	write (1, &digit, 1);
}

int main(int argc, char **argv)
{
	argv[1] = 0;

	num (argc);
	write (1, "\n", 1);
	return (0)
}*/

void	ft_putnbr(int n)
{
	char digit;

	if (n >= 10)
		ft_putnbr(n / 10);
	digit = (n % 10) + '0';
	write(1, &digit, 1);
}

int	main(int argc, char **argv)
{
	(void)argv;

	ft_putnbr(argc - 1);
	write(1, "\n", 1);
	return (0);
}
