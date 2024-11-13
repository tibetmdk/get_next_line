/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmidik <tibetmdk@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 17:09:46 by tmidik            #+#    #+#             */
/*   Updated: 2024/11/13 15:02:33 by tmidik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 4
# endif

#include <stdlib.h>
#include <unistd.h>

int		ft_strlen(char *str);
int		newline_counter(char *raw_str);
char	*ft_strjoin(char *left_str, char *buff);
char	*ft_strchr(char *str, int c);
char	*get_next_line(int fd);
char	*get_line(char *stack);
char	*new_line(char *str);
char	*read_line(int fd, char *stack);

#endif