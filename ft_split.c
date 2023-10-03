/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 18:10:33 by amunoz-b          #+#    #+#             */
/*   Updated: 2023/09/29 17:27:20 by amunoz-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_numstring(const char *s, char c)
{
	size_t	count;
	size_t	flag;

	count = 0;
	flag = 0;
	if (!s)
		return (0);
	while (*s != '\0')
	{
		if (*s == c)
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			count++;
		}
		s++;
	}
	return (count);
}

static size_t	ft_numchar(const char *s, char c)
{
	size_t	count;

	count = 0;
	while (s[count] != c && s[count] != '\0')
		count++;
	return (count);
}

static char	**ft_free_str(const char **str, size_t len_str)
{
	while (len_str > 0)
	{
		free((void *)str[len_str]);
		len_str--;
	}
	free(str);
	return (NULL);
}

char	**ft_split(const char *s, char c)
{
	char	**str;
	size_t	len;
	size_t	i;
	size_t	sl;

	i = 0;
	sl = 0;
	len = ft_numstring(s, c);
	str = malloc(sizeof(char *) * (len + 1));
	if (!str)
		return (NULL);
	while (i < len)
	{
		while (*s == c)
			s++;
		sl = ft_numchar((const char *)s, c);
		str[i] = malloc(sizeof(char) * sl + 1);
		if (!str[i])
			ft_free_str((const char **)str, i);
		ft_strlcpy(str[i], s, sl + 1);
		s = (ft_strchr(s, (int)c));
		i++;
	}
	str[i] = NULL;
	return (str);
}
