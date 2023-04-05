/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scuter <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/08 11:53:02 by scuter            #+#    #+#             */
/*   Updated: 2020/10/12 18:43:08 by scuter           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	rec(int nb)
{
	if (nb == 0)
		return ;
	rec(nb / 10);
	ft_putchar('0' + (nb % 10));
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else if (nb == 0)
		write(1, "0", 1);
	else if (nb > 0)
		rec(nb);
	else
	{
		ft_putchar('-');
		rec(-nb);
	}
}
