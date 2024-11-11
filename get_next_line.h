/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmidik <tibetmdk@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 17:09:46 by tmidik            #+#    #+#             */
/*   Updated: 2024/11/11 15:24:25 by tmidik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 4
# endif

#include <stdlib.h>
#include <unistd.h>

char	*get_next_line(int fd);
char	*read_line(int fd, char *remain);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_strchr(char *str, char c);
int 	ft_strlen(char *str);

#endif