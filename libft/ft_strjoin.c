/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thlefebv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 12:16:44 by thlefebv          #+#    #+#             */
/*   Updated: 2023/04/24 12:16:48 by thlefebv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*tab;	
	int		i;
	int		k;

	i = 0;
	k = 0;
	tab = (char *) malloc ((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof (char));
	if (!tab)
		return (NULL);
	while (s1[k])
	{
		tab[k] = s1[k];
		k++;
	}
	while (s2[i])
	{
		tab[k] = s2[i];
		i++;
		k++;
	}
	tab[k] = '\0';
	return (tab);
}
