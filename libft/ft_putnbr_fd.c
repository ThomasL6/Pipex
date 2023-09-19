/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thlefebv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 10:22:32 by thlefebv          #+#    #+#             */
/*   Updated: 2023/04/25 10:22:35 by thlefebv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int	division;
	int	modulo;

	if (n == -2147483648)
	{
		ft_putstr_fd("-2147483648", fd);
		return ;
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = -n;
	}
	if (n > 9)
	{
		division = n / 10;
		modulo = n % 10;
		ft_putnbr_fd(division, fd);
	}
	if (n > 9)
		ft_putchar_fd(modulo + '0', fd);
	else
		ft_putchar_fd(n + '0', fd);
}
