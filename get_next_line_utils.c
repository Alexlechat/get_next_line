/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allefran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 11:06:10 by allefran          #+#    #+#             */
/*   Updated: 2024/12/17 14:20:35 by allefran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		*(unsigned char *) s = 0;
		s++;
		i++;
	}
}

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(const char *s)
{
	char	*dup_s;
	int		i;

	dup_s = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (dup_s == NULL)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		dup_s[i] = s[i];
		i++;
	}
	dup_s[i] = '\0';
	return (dup_s);
}

char	*ft_strjoin(char *s1, char const *s2)
{
	char	*new_s;
	int		i;
	int		j;

	if (!s1)
		s1 = ft_strdup("");
	if (!s1)
		return (free(s1), NULL);
	new_s = malloc((ft_strlen(s1) + ft_strlen(s2)) + 1);
	if (new_s == NULL)
		return (free(s1), NULL);
	i = 0;
	while (s1[i])
	{
		new_s[i] = s1[i];
		i++;
	}
	j = -1;
	while (s2[++j])
	{
		new_s[i] = s2[j];
		i++;
	}
	new_s[i] = '\0';
	return (free(s1), new_s);
}

int	ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (unsigned char)c)
		{
			return (1);
		}
		i++;
	}
	if ((unsigned char)c == '\0')
	{
		return (1);
	}
	return (0);
}
