/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-b <amunoz-b@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 15:49:54 by amunoz-b          #+#    #+#             */
/*   Updated: 2023/09/11 15:50:30 by amunoz-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nb)
{
	int	i;
	int	num;
	int	signo;

	i = 0;
	num = 0;
	signo = 1;
	while (nb[i] == ' ' || nb[i] == '\r' || nb[i] == '\t'
		|| nb[i] == '\n' || nb[i] == '\v' || nb[i] == '\f')
	{
		i++;
	}
	if (nb[i] == '-')
		signo = signo * -1;
	if (nb[i] == '-' || nb[i] == '+')
		i++;
	while (nb[i] >= '0' && nb[i] <= '9')
	{
		num = (num * 10) + (nb[i] - '0');
		i++;
	}
	return (num * signo);
}
