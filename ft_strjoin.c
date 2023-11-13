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
#include "pipex.h"

char	*ft_strjoin(char *s1, char *s2)
{
	char	*tab;	
	size_t	index;
	size_t	i;

	i = 0;
	index = 0;
	tab = (char *) malloc ((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof (char));
	if (!tab)
		return (NULL);
	while (s1[index] != '\0')
	{
		tab[index] = s1[index];
		index++;
	}
	while (s2[i] != '\0')
	{
		tab[index + i] = s2[i];
		i++;
	}
	tab[index + i] = '\0';
	return (tab);
}
