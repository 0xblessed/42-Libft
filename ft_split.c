/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 18:10:33 by amunoz-b          #+#    #+#             */
/*   Updated: 2023/09/16 18:21:39 by amunoz-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static size_t	count_words(const char *s, char c)
{
	size_t	in_word;
	size_t	count;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s == c)
			in_word = 0;
		else if (!in_word)
		{
			in_word = 1;
			count++;
		}
		s++;
	}
	return (count);
}

void	*verifica(char **str, size_t u)
{
	size_t	i;

	i = 0;
	if (!str[u - 1])
	{
		while (i < u - 1)
		{
			free(str[i]);
			i++;
		}
		free(str);
		return (NULL);
	}
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	u;
	char	**str;

	if (!s)
		return (NULL);
	i = count_words(s, c);
	str = (char **)malloc(sizeof(char *) * (i + 1));
	if (!str)
		return (NULL);
	i = 0;
	j = 0;
	u = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			if (j > 0)
			{
				str[u++] = ft_substr(s, (unsigned int)(i - j), j);
				verifica(str, u);
			}
			j = 0;
		}
		else
			j++;
		i++;
	}
	if (j > 0)
	{
		str[u++] = ft_substr(s, (unsigned int)(i - j), j);
		verifica(str, u);
	}
	str[u] = NULL;
	return (str);
}
