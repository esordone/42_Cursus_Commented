/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esordone <esordone@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 11:12:31 by esordone          #+#    #+#             */
/*   Updated: 2022/11/16 11:39:48 by esordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	*ft_free(char **str)
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
	tmp = (char *)malloc(sizeof(char) * BUFFER_SIZE + 1);
	if (!tmp)
		return (ft_free(&str));
	while (!ft_strchr(str, '\n') && i != 0)
	{
		i = read(fd, tmp, BUFFER_SIZE);
		if (i == -1)
		{
			free(tmp);
			return (ft_free(&str));
		}
		//1. de donde leo (fd)
		//2. donde lo guardo (str)
		//3. cuanto quiero leer (BUFFER)
		tmp[i] = '\0';
		str = ft_strjoin(str, tmp);
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
		line = (char *)malloc(sizeof(char) * i + 1);
	else
		line = (char *)malloc(sizeof(char) * i + 2);
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
	line[i] = '\0';
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
		return (ft_free(&str));
	line = (char *)malloc(sizeof(char) * (ft_strlen(str) - i) + 1);
	if (!line)
		return (ft_free(&str));
	i++;
	while (str[i])
		line[n++] = str[i++];
	if (n > 0)
		line[n] = '\0';
	else
	{
		free(line);
		return (ft_free(&str));
	}
	ft_free(&str);
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
		return (ft_free(&buffer));
	buffer = next(buffer);
	return (new_line);
}
/*
int	main(void)
{
	int	fd;

    fd = open("/Users/esordone/get_next_line/text.txt", O_RDONLY);
	printf("fd == %i\n", fd);
	printf("La primera linea contiene: %s\n", get_next_line(fd));
	printf("La segunda linea contiene: %s\n", get_next_line(fd));
	close(fd);
	return (0);
}*/
/*
int main (int argc, char **argv)
{
	int		fd;
	char	*str;

	if (argc != 2)
		return (1);

	printf("File: %s\n",argv[1]);
	
	fd = open(argv[1], O_RDONLY);
	str = get_next_line(fd);
	while (str != NULL)
	{
		printf("Linea: %s",str);
		str = get_next_line(fd);
		if (str != NULL)
			free(str);
	}
	return (0);
}*/
