/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 14:57:02 by tsomchan          #+#    #+#             */
/*   Updated: 2023/09/19 14:57:03 by tsomchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	if (!s)
		return (0);
	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strdup(const char *s1)
{
	char			*ptr;
	size_t			i;

	if (!s1)
		return (NULL);
	ptr = malloc((ft_strlen(s1) + 1));
	if (!ptr)
		return (NULL);
	i = 0;
	while (*s1)
		ptr[i++] = *s1++;
	ptr[i] = '\0';
	return (ptr);
}

char	*ft_strchr(const char *s, int c)
{
	while (*s != (char)c)
	{
		if (!*s++)
			return (0);
	}
	return ((char *)s);	
}

size_t check_newline(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] && s[i] != '\n')
		i++;
	if (s[i] == '\n')
		i++;
	return (i);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;
	char	*src;

	if (!s)
		return (0);
	if (ft_strlen(s) <= start)
		return (ft_strdup(""));
	sub = malloc(len + 1);
	if (!sub)
		return (0);
	src = (char *)(s + start);
	i = 0;
	if (len)
	{
		while (i < len - 1 && *src)
			sub[i++] = *src++;
		sub[i] = '\0';
	}
	return (sub);
}
