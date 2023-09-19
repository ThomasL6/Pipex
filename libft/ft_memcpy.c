/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thlefebv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 16:47:44 by thlefebv          #+#    #+#             */
/*   Updated: 2023/04/19 16:47:49 by thlefebv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*dest1;
	const char	*src1;

	dest1 = (char *) dest;
	src1 = (char *) src;
	i = 0;
	if (!dest && !src)
		return (NULL);
	while (i != n)
	{
		dest1[i] = src1[i];
		i++;
	}
	return (dest1);
}
