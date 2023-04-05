/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scuter <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 17:49:51 by scuter            #+#    #+#             */
/*   Updated: 2020/10/17 20:57:38 by scuter           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		return_digits(char *base)
{
	int i;
	int j;

	i = 0;
	while (base[i])
	{
		if ((base[i] == '-') || (base[i] == '+'))
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	if (i < 2)
		return (0);
	return (i);
}

void	ft_putchar(int i, char *base)
{
	write(1, &base[i], 1);
}

void	rec(long nbr, int digits, char *base)
{
	if (nbr == 0)
		return ;
	rec(nbr / digits, digits, base);
	ft_putchar((int)(nbr % digits), base);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int digits;

	digits = return_digits(base);
	if (digits == 0)
		return ;
	if (nbr == 0)
		write(1, &base[0], 1);
	else if (nbr > 0)
		rec((long)nbr, digits, base);
	else
	{
		write(1, "-", 1);
		rec((-(long)nbr), digits, base);
	}
}
