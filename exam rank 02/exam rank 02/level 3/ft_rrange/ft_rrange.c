/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esordone <esordone@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 11:47:16 by esordone          #+#    #+#             */
/*   Updated: 2023/05/15 12:44:00 by esordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int     *ft_rrange(int start, int end)
{
	int *array;
	int i;
	int len;

	if (start <= end)
		len = (end - start) + 1;
	else
		len = (start - end) + 1;
	i = 0;
	array = (int *)malloc(sizeof(int) * len);
	if (!array)
		return (0);
	if (start > end)
	{
		while (len)
		{
			array[i] = start;
			i++;
			start--;
			len--;
		}
	}
	else
	{
		while (len)
		{
			array[i] = end;
			i++;	
			end--;
			len--;
		}
	}
	return (array);
}

/*int main()
{
	int start = -1;
	int end = 2;
	int *res;
	int len;
	int i;

	i = 0;
	if (start <= end)
		len = (end - start) + 1;
	else
		len = (start - end) + 1;
	res = ft_rrange(start, end);
	while (res[i] || i < len)
	{
		printf("|%d|\n", res[i]);
		i++;
	}
	return (0);
}*/
