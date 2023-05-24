/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esordone <esordone@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 10:41:32 by esordone          #+#    #+#             */
/*   Updated: 2023/05/12 10:59:58 by esordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void  write_num(int n)
{
	char c;

	if (n > 9)
	{
		write_num(n / 10);
		c = (n % 10) + '0';
		write (1, &c, 1); 
	}
	else
	{
		c = (n % 10) + '0';
		write (1, &c, 1);
	}
}

int main()
{
	int n;

	n = 1;
	while (n <= 100)
	{
		if ((n % 3 == 0) && (n % 5 == 0))
			write (1, "fizzbuzz\n", 9);
		else if (n % 3 == 0)
			write (1, "fizz\n", 5);
		else if (n % 5 == 0)
			write (1, "buzz\n", 5);
		else
		{
			write_num(n);
			write (1, "\n", 1);
		}
		n++;
	}
	return (0);
}
