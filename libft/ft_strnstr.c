/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thlefebv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 10:08:31 by thlefebv          #+#    #+#             */
/*   Updated: 2023/04/14 10:08:35 by thlefebv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	k;
	size_t	littlelen;

	i = 0;
	k = 0;
	littlelen = ft_strlen((char *)little);
	if (littlelen == 0)
		return ((char *)big);
	while (big[i] != '\0' && i < len)
	{
		while (little[k] == big[i + k] && i + k < len)
		{
			k++;
			if (k == littlelen)
			{
				return ((char *)&big[i]);
			}
		}
		i++;
		k = 0;
	}
	return (NULL);
}
