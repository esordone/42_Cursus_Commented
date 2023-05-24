/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esordone <esordone@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 14:56:19 by esordone          #+#    #+#             */
/*   Updated: 2023/05/11 16:00:48 by esordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	int i;
	int c;

	i = 0;
	c = 0;
	while (s[i])
	{
		c = 0;
		if (s[i] == reject[c])
			return (i);
		while (reject[c])
		{
			if (s[i] != reject[c])
				c++;
		}
		i++;
	}
	return (i);
}

/*
int main()
{
	char s[] = "imdmdmdeiiiiuabcde";
	char set[] = "ea";

	printf("strcspn = %lu\n", strcspn(s, set));
	printf("ft_strcspn = %zu\n", ft_strcspn(s, set));
	return (0);
}*/
