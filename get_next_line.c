/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmidik <tibetmdk@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 01:01:37 by tmidik            #+#    #+#             */
/*   Updated: 2024/11/19 20:39:04 by tmidik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

char *ft_update_line(char *remain)
{
	int		i;
	int		j;
	char	*new;
	i = 0;
	printf("1");
	while (remain[i] != '\0' && remain[i] != '\n')
		i++;
	if (remain[i] == '\0')
		return (NULL);
	new = (char *)malloc(ft_strlen(remain) - i + 1);
	if (!new)
		return (NULL);
	i++;
	j = 0;
	printf("2");
	while (remain[i])
		new[j++] = remain[i++];
	new[j] = '\0';
	printf("3");
	return (new);
}

char	*ft_get_line(char *remain)
{
	int		len;
	int		i;
	char	*line;

	printf("4");
	while (remain[len] != '\0' && remain[len] != '\n')
		len++;
	if (*remain == '\0')
		line = (char *)malloc(sizeof(char) * (len + 1));
	else
		line = (char *)malloc(sizeof(char) * (len + 2));
	if (!line)
		return (NULL);
	i = 0;
	printf("5");
	while (remain[i] != '\0' && remain[i] != '\n')
	{
		line[i] = remain[i];
		i++;
	}
	printf("6");
	if (remain[i] == '\n')
		line[i++] = '\n';
	line[i] = '\0';
	printf("7");
	return (line);
}

char	*get_next_line(int fd)
{
	static char	*remain = NULL;
	char		*buf;
	char		*line;
	int			readed_byt;
	
	printf("8");
	if (fd < 0 && BUFFER_SIZE <= 0)
		return (NULL);
	buf = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
	
	while ((readed_byt = read(fd, buf, BUFFER_SIZE)) > 0)
	{
		buf[readed_byt] = '\0';
		remain = ft_strjoin(remain, buf);
		if (ft_strchr(remain, '\n'))
			break;
	}
	free(buf);
	printf("9");
	if (!remain || !*remain)
	{
		if (remain)
			free(remain);
		return (NULL);
	}
	printf("10");
	line = ft_get_line(remain);
	remain = ft_update_line(remain);
	return (line);
}
