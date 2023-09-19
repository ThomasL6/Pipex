/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thlefebv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 15:13:29 by thlefebv          #+#    #+#             */
/*   Updated: 2023/04/18 15:13:33 by thlefebv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	k;

	i = 0;
	k = 0;
	while (i < size - 1 && src[i] && size != 0)
	{
		dst[i] = src[i];
		i++;
	}
	while (src[k] != '\0')
	{
		k++;
	}
	if (size > 0)
	{
		dst[i] = '\0';
	}
	return (k);
}
