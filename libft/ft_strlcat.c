/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thlefebv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 16:11:26 by thlefebv          #+#    #+#             */
/*   Updated: 2023/04/18 16:11:30 by thlefebv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dstlen;
	size_t	srclen;

	i = 0;
	j = 0;
	srclen = ft_strlen(src);
	dstlen = ft_strlen(dst);
	while (dst[j] != '\0')
		j++;
	while (src[i] != '\0' && i + j < size - 1 && size != 0)
	{
		dst[j + i] = src[i];
		i++;
	}	
	dst[i + j] = '\0';
	if (dstlen > size)
		return (size + srclen);
	else
		return (srclen + dstlen);
}
