/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scuter <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 00:15:54 by scuter            #+#    #+#             */
/*   Updated: 2020/10/22 00:15:57 by scuter           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	rec(int nb)
{
	if (nb == 0)
		return ;
	rec(nb / 10);
	ft_putchar((nb % 10) + '0');
}

void	ft_putnbr(int nb)
{
	if (nb == 0)
		write(1, "0", 1);
	if (nb > 0)
		rec(nb);
	write(1, "\n", 1);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
	write(1, "\n", 1);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int i;

	i = 0;
	while (par[i].str)
	{
		ft_putstr(par[i].str);
		ft_putnbr(par[i].size);
		ft_putstr(par[i].copy);
		i++;
	}
}
