/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-b <amunoz-b@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 18:03:47 by amunoz-b          #+#    #+#             */
/*   Updated: 2023/09/29 16:16:02 by amunoz-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dest;
	size_t	len;
	size_t	i;

	if (!s1 || !s2)
		return (NULL);
	dest = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!dest)
		return (NULL);
	i = 0;
	len = 0;
	while (s1 && i < ft_strlen(s1))
		dest[len++] = s1[i++];
	i = 0;
	while (s2 && i < ft_strlen(s2))
		dest[len++] = s2[i++];
	dest[len] = '\0';
	return (dest);
}
