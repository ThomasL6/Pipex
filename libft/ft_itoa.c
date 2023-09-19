/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thlefebv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 17:28:18 by thlefebv          #+#    #+#             */
/*   Updated: 2023/04/25 17:28:20 by thlefebv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_intlen(long n)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		n = n * -1;
		i++;
	}
	if (n == 0)
		i++;
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*tab;
	int		calc;
	long	nb;

	nb = n;
	calc = ft_intlen(nb);
	tab = malloc((calc + 1) * sizeof(char));
	if (!tab)
		return (NULL);
	tab[calc] = '\0';
	calc--;
	if (n < 0)
	{
		nb = nb * -1;
		tab[0] = '-';
	}
	if (n == 0)
		tab[0] = '0';
	while (nb > 0)
	{
		tab[calc] = (nb % 10) + 48;
		nb = nb / 10;
		calc--;
	}
	return (tab);
}
