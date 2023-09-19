/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thlefebv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 11:04:43 by thlefebv          #+#    #+#             */
/*   Updated: 2023/04/24 11:04:45 by thlefebv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	k;
	char	*tab;

	i = 0;
	k = start;
	if (start > ft_strlen(s))
	{
		tab = (char *) malloc (sizeof (char));
		tab[0] = '\0';
		return (tab);
	}
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	tab = (char *) malloc((len + 1) * sizeof(char));
	if (!tab)
		return (NULL);
	while (k < len + start)
	{
		tab[i] = s[k];
		i++;
		k++;
	}
	tab[i] = '\0';
	return (tab);
}
