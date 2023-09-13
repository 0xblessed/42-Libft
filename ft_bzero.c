/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-b <amunoz-b@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 14:03:48 by amunoz-b          #+#    #+#             */
/*   Updated: 2023/09/13 17:00:26 by amunoz-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"

void	*ft_memeset(void *b, int c, size_t len)
{
	unsigned char	*a;
	size_t			i;

	a = (unsigned char *)b;
	i = 0;
	while (i < len)
	{
		a[i++] = (unsigned char)c;
	}
	return (b);
}

void	ft_bzero(void *s, size_t n)
{
	ft_memeset(s, 0, n);
}
