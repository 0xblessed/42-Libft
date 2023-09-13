/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-b <amunoz-b@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 17:46:57 by amunoz-b          #+#    #+#             */
/*   Updated: 2023/09/11 18:24:01 by amunoz-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>

size_t	ft_strlen(const char *c);

char	*ft_strdup(const char *s1)
{
	char	*v;
	size_t	len;
	size_t	i;

	len = ft_strlen(s1);
	v = malloc(sizeof(char) * (len + 1));
	if (v == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (v[i] != '\0')
	{
		v[i] = s1[i];
		i++;
	}
	v[i] = '\0';
	return (v);
}
