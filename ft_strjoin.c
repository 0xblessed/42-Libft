/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 18:25:53 by amunoz-b          #+#    #+#             */
/*   Updated: 2023/09/16 18:25:55 by amunoz-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dest;
	size_t	len;

	if (!s1 || !s2)
		return (NULL);
	len = (ft_strlen(s1) + ft_strlen(s2) + 1);
	dest = (char *)malloc(sizeof(char) * len);
	if (!dest)
		return (NULL);
	ft_strlcpy(dest, s1, len);
	ft_strlcat(dest, s2, len);
	dest[len] = '\0';
	return (dest);
}
