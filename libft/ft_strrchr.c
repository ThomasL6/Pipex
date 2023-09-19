/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thlefebv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 14:29:21 by thlefebv          #+#    #+#             */
/*   Updated: 2023/04/13 14:29:23 by thlefebv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;

	i = ft_strlen(s);
	if (s[i] == (char)c)
		return ((char *)&s[i]);
	while (i-- >= 0)
		if (s[i] == (char)c)
			return ((char *)&s[i]);
	return (NULL);
}
