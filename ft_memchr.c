/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-b <amunoz-b@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 15:48:16 by amunoz-b          #+#    #+#             */
/*   Updated: 2023/09/13 17:42:08 by amunoz-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr( const void *ptr, int ch, size_t count )
{
	size_t	i;

	i = 0;
	while (i < count)
	{
		if ((unsigned char)ch == *(unsigned char *)(ptr + i))
		{
			return ((void *)(ptr + i));
		}
		i++;
	}
	return (NULL);
}
