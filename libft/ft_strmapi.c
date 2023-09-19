/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thlefebv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 15:34:17 by thlefebv          #+#    #+#             */
/*   Updated: 2023/04/25 15:34:19 by thlefebv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*tab;
	unsigned int	index;

	index = 0;
	tab = malloc ((ft_strlen(s) + 1) * sizeof(char));
	if (!tab)
		return (NULL);
	while (s[index] != '\0')
	{
		tab[index] = f(index, s[index]);
		index++;
	}
	tab[index] = '\0';
	return (tab);
}
