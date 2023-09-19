/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thlefebv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 15:27:44 by thlefebv          #+#    #+#             */
/*   Updated: 2023/04/24 15:27:47 by thlefebv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_is_set(char const *set, char caract)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == caract)
		{
			return (1);
		}
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		t;
	int		start;
	int		end;
	int		endleng;
	char	*tab;

	t = 0;
	start = 0;
	end = ft_strlen(s1);
	while (s1[start] && ft_is_set(set, s1[start]))
		start++;
	while (end > start && ft_is_set(set, s1[end - 1]) != 0)
		end--;
	endleng = ft_strlen(s1) - end;
	tab = malloc ((ft_strlen(s1) + 1 - start - endleng) * sizeof(char));
	if (!tab)
		return (NULL);
	while (start < end)
		tab[t++] = s1[start++];
	tab[t] = 0;
	return (tab);
}
