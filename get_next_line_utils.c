/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmidik <tibetmdk@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 14:19:47 by tmidik            #+#    #+#             */
/*   Updated: 2024/11/19 20:37:18 by tmidik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strchr(char *str, char c)
{
	int	i;
	
	if (!str)
		return (0);
	if (c == '\0')
		return (str);
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			return ((char *)&str[i]);
		i++;
	}
	return (0);	
}

static char	*ft_strdup(char *s1)
{
	char	*buffer;
	int		i;

	i = 0;
	buffer = (char *)malloc(sizeof(char) * ft_strlen(s1) + 1);
	if (!buffer)
		return (NULL);
	while (s1[i] != '\0')
	{
		buffer[i] = s1[i];
		i++;
	}
	buffer[i] = '\0';
	return (buffer);
}

char	*ft_strjoin(char *s1, char *s2)
{
	int		i;
	char	*res;

	if (!s1)
		return (ft_strdup(s2));
	if (!s2)
		return (ft_strdup(s1));
	if (!s1 && !s2)
		return (NULL);
	res = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!res)
		return (NULL);
	i = -1;
	while (s1[++i])
		res[i] = s1[i];
	while (s2[i - ft_strlen(s1)])
	{
		res[i] = s2[i - ft_strlen(s1)];
		i++;
	}
	free(s1);
	res[i] = '\0';
	return (res);
}

