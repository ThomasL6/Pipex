/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thlefebv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 15:39:55 by thlefebv          #+#    #+#             */
/*   Updated: 2023/04/13 15:39:58 by thlefebv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	nb;
	int	mu;

	mu = 1;
	i = 0;
	nb = 0;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == 32)
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
		{
			mu *= -1;
		}
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
		nb = (nb * 10) + (nptr[i++] - '0');
	nb *= mu;
	return (nb);
}
