/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esordone <esordone@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 15:18:07 by esordone          #+#    #+#             */
/*   Updated: 2023/05/09 15:24:18 by esordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int		max(int* tab, unsigned int len)
{
	int i;
	int res;

	i = 0;
	res = tab[i];
	while (i < len)
	{
		if (tab[i] > res)
			res = tab[i];
		i++;
	}
	return (res);
}

/*int main()
{
	int res[] = {1,3,53,-2,57};
	int len = 3;

	printf("max = %d\n", max(res, len));
	return (0);
}*/
