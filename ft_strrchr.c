/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-b <amunoz-b@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 18:32:48 by amunoz-b          #+#    #+#             */
/*   Updated: 2023/09/11 17:32:18 by amunoz-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strrchr(const char *s, int c)
{
	char	*v;

	v = NULL;
	while (*s != '\0')
	{
		if (*s == c)
			v = (char *)s;
		s++;
	}
	if (*s == c)
	{
		return ((char *)s);
	}
	return (v);
}
