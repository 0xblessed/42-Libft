/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 18:23:34 by amunoz-b          #+#    #+#             */
/*   Updated: 2023/09/16 18:23:41 by amunoz-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	r;

	r = n;
	if (r < 0)
	{
		ft_putchar_fd('-', fd);
		r = r * -1;
	}
	if (r >= 10)
	{
		ft_putnbr_fd(r / 10, fd);
		ft_putnbr_fd(r % 10, fd);
	}
	else
	{
		ft_putchar_fd(r + '0', fd);
	}
}
