/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thlefebv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 17:04:54 by thlefebv          #+#    #+#             */
/*   Updated: 2023/04/20 17:04:58 by thlefebv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*m;
	unsigned char	*k;
	size_t			i;

	i = 0;
	m = (unsigned char *)s1;
	k = (unsigned char *)s2;
	while (i < n)
	{
		if (m[i] != k[i])
			return (m[i] - k[i]);
		i++;
	}
	return (0);
}
