/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 16:00:44 by tsomchan          #+#    #+#             */
/*   Updated: 2023/09/23 16:00:45 by tsomchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <fcntl.h>
# include <limits.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

//	get_next_line.c
char	*get_next_line(int fd);
char	*read_next_line(int fd, char **store, char *buffer);
void	get_store(char **store, int condition, char *section);
char	*join_line(char const *s1, char const *s2, size_t *index);

//	get_next_line_utils.c
size_t	ft_strlen(const char *s);
size_t	len_till_nl(const char *s);
char	*ft_strdup(const char *s1);
char	*ft_strchr(const char *s, int c);

#endif
