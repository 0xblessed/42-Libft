/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-b <amunoz-b@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 18:45:24 by amunoz-b          #+#    #+#             */
/*   Updated: 2023/09/20 19:13:59 by amunoz-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	len1;
	char	*str;

	if (!s1 || !set)
		return (NULL);
	len1 = ft_strlen(s1);
	i = 0;
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	if (!s1[i])
		return (ft_strdup(""));
	while (s1[len1 - 1] && ft_strchr(set, s1[len1 - 1]))
		len1--;
	str = (char *)malloc(sizeof(char) * (len1 - i + 1));
	if (!str)
		return (NULL);
	ft_strlcpy(str, s1 + i, len1 - i + 1);
	return (str);
}
