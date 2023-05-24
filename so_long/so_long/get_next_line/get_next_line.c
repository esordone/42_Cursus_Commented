/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esordone <esordone@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 11:12:31 by esordone          #+#    #+#             */
/*   Updated: 2022/12/12 16:29:55 by esordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	*ft_getfree(char **str)
{
	free(*str);
	*str = NULL;
	return (NULL);
}

char	*read_file(int fd, char *str)
{
	char	*tmp;
	int		i;

	i = 1;
	tmp = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!tmp)
		return (ft_getfree(&str));
	while (!ft_getstrchr(str, '\n') && i != 0)
	{
		i = read(fd, tmp, BUFFER_SIZE);
		if (i == -1)
		{
			free(tmp);
			return (ft_getfree(&str));
		}
		tmp[i] = '\0';
		str = ft_getstrjoin(str, tmp);
	}
	free(tmp);
	return (str);
}

char	*the_line(char *str)
{
	int		i;
	char	*line;

	i = 0;
	if (!str[i])
		return (NULL);
	while (str[i] && str[i] != '\n')
		i++;
	if (str[i] != '\n')
		line = ft_getcalloc(sizeof(char), i + 1);
	else
		line = ft_getcalloc(sizeof(char), i + 2);
	if (!line)
		return (NULL);
	i = 0;
	while (str[i] && str[i] != '\n')
	{
		line[i] = str[i];
		i++;
	}
	if (str[i] && str[i] == '\n')
		line[i++] = '\n';
	return (line);
}

char	*next(char *str)
{
	int		i;
	int		n;
	char	*line;

	i = 0;
	n = 0;
	while (str[i] && str[i] != '\n')
		i++;
	if (!str[i])
		return (ft_getfree(&str));
	line = ft_getcalloc(sizeof(char), (ft_getstrlen(str) - i) + 1);
	if (!line)
		return (ft_getfree(&str));
	i++;
	while (str[i])
		line[n++] = str[i++];
	if (n <= 0)
	{
		free(line);
		return (ft_getfree(&str));
	}
	ft_getfree(&str);
	return (line);
}

char	*get_next_line(int fd)
{
	static char	*buffer;
	char		*new_line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	buffer = read_file(fd, buffer);
	if (!buffer)
		return (NULL);
	new_line = the_line(buffer);
	if (!new_line)
		return (ft_getfree(&buffer));
	buffer = next(buffer);
	return (new_line);
}
