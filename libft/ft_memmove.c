/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thlefebv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 17:41:16 by thlefebv          #+#    #+#             */
/*   Updated: 2023/04/19 17:41:19 by thlefebv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*dest1;
	unsigned char		*src1;
	size_t				i;

	dest1 = (unsigned char *) dest;
	src1 = (unsigned char *) src;
	i = 0;
	if (dest1 < src1)
	{
		while (i < n)
		{
			dest1[i] = src1[i];
			i++;
		}
	}
	else if (dest1 > src1)
	{
		while (n > 0)
		{
			n--;
			dest1[n] = src1[n];
		}
	}
	return (dest1);
}
