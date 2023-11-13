/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thlefebv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 14:12:27 by thlefebv          #+#    #+#             */
/*   Updated: 2023/04/21 14:12:30 by thlefebv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "pipex.h"

char	*ft_strdup(const char *s)
{
	int		i;
	int		j;
	char	*k;

	j = 0;
	i = ft_strlen(s);
	k = (char *)malloc (sizeof(char) * (i + 1));
	if (k == NULL)
		return (NULL);
	while (s[j] != '\0')
	{
		k[j] = s[j];
		j++;
	}
	k[j] = '\0';
	return (k);
}
