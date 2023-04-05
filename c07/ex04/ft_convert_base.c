/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scuter <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 19:00:40 by scuter            #+#    #+#             */
/*   Updated: 2020/10/28 10:53:27 by scuter           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		return_digits(char *base);

int		return_index(char c, char *base);

int		ft_atoi_base(char *str, int digits, char *base);

void	ft_putchar(char *str, int index, char *base)
{
	*str = base[index];
}

void	rec(char *str, long nbr, int digits, char *base)
{
	if (nbr == 0)
		return ;
	--str;
	rec(str, nbr / digits, digits, base);
	ft_putchar(str, (int)(nbr % digits), base);
}

void	ft_putnbr_base(char *str, int nbr, int digits, char *base)
{
	if (nbr == 0)
		*str = base[0];
	else if (nbr > 0)
		rec(++str, (long)nbr, digits, base);
	else
		rec(++str, (-(long)nbr), digits, base);
}

int		count(int dec_nbr, int digits_to)
{
	int i;

	i = 0;
	if (dec_nbr <= 0)
		i++;
	while (dec_nbr)
	{
		dec_nbr = dec_nbr / digits_to;
		i++;
	}
	return (i);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char	*nbr_to;
	int		dec_nbr;
	int		digits_from;
	int		digits_to;
	int		i;

	if (*nbr == 0 || *base_from == 0 || *base_to == 0)
		return (NULL);
	digits_from = return_digits(base_from);
	digits_to = return_digits(base_to);
	if (digits_from == 0 || digits_to == 0)
		return (NULL);
	dec_nbr = ft_atoi_base(nbr, digits_from, base_from);
	i = count(dec_nbr, digits_to);
	nbr_to = malloc(sizeof(char) * i + 1);
	if (nbr_to == NULL)
		return (NULL);
	if (dec_nbr < 0)
		nbr_to[0] = '-';
	ft_putnbr_base(nbr_to + i - 1, dec_nbr, digits_to, base_to);
	nbr_to[i] = 0;
	return (nbr_to);
}
