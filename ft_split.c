/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thlefebv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 09:59:49 by thlefebv          #+#    #+#             */
/*   Updated: 2023/04/26 09:59:52 by thlefebv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "pipex.h"

int	ft_charset(char c, char charset)
{
	if (charset == c)
		return (1);
	return (0);
}

int	contw(char *str, char charset)
{
	int	i;
	int	w;

	w = 0;
	i = 0;
	while (str[i])
	{
		while (ft_charset(str[i], charset) == 1 && str[i] != '\0')
			i++;
		if (ft_charset(str[i], charset) == 0 && str[i] != '\0')
			w++;
		while (ft_charset(str[i], charset) == 0 && str[i] != '\0')
			i++;
	}
	return (w);
}

char	*ft_strdupsize(const char *src, int size)
{
	char	*dest;
	char	*start;
	int		i;

	i = 0;
	dest = malloc(sizeof(char) * (size + 1));
	start = dest;
	if (!dest)
		return (0);
	while (*src && i < size)
	{
		*(dest++) = *(src++);
		i++;
	}
	*dest = '\0';
	return (start);
}

char	**ft_split(char const *str, char charset)
{
	char	**tab;
	int		i;
	int		w;
	int		j;

	w = contw((char *)str, charset);
	i = 0;
	tab = malloc(sizeof(char *) * (w + 1));
	if (!tab)
		return (NULL);
	while (i < w)
	{
		j = 0;
		while (ft_charset(*str, charset) == 1)
			str++;
		while (ft_charset(str[j], charset) == 0 && str[j])
			j++;
		tab[i] = ft_strdupsize(str, j);
		str = str + j;
		i++;
	}
	tab[i] = NULL;
	return (tab);
}
