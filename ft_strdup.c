/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-b <amunoz-b@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 17:46:57 by amunoz-b          #+#    #+#             */
/*   Updated: 2023/09/13 16:56:06 by amunoz-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	str_len(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(const char *src)
{
	char	*srt;
	int		i;
	int		j;

	j = str_len(src);
	srt = (char *) malloc(sizeof(char) * (j + 1));
	if (srt == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (src[i] != '\0')
	{
		srt[i] = src[i];
		i++;
	}
	srt[i] = '\0';
	return (srt);
}
