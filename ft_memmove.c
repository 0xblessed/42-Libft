/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-b <amunoz-b@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 14:56:01 by amunoz-b          #+#    #+#             */
/*   Updated: 2023/09/08 15:31:21 by amunoz-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	if (!dst || !src)
		return (0);
	i = 0;
	if (((size_t)dst - (size_t)src) < len)
	{
		i = len - 1;
		while (i > 0)
		{
			(unsigned char *)dst[i] = (unsigned char *)src[i];
			i--;
		}
	}
	else
	{
		while (i < len)
		{
			(unsigned char *)dst[i] = (unsigned char *)src[i];
			i++;
		}
	}
	return (dst);
}
