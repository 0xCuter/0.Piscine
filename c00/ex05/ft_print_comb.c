/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scuter <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/08 10:38:06 by scuter            #+#    #+#             */
/*   Updated: 2020/10/08 11:20:54 by scuter           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_nums(char c1, char c2, char c3)
{
	write(1, &c1, 1);
	write(1, &c2, 1);
	write(1, &c3, 1);
	if (c1 != '7' || c2 != '8' || c3 != '9')
		write(1, ", ", 2);
}

void	ft_print_comb(void)
{
	char c1;
	char c2;
	char c3;

	c1 = '0';
	while (c1 <= '7')
	{
		c2 = c1 + 1;
		while (c2 <= '8')
		{
			c3 = c2 + 1;
			while (c3 <= '9')
			{
				print_nums(c1, c2, c3);
				c3++;
			}
			c2++;
		}
		c1++;
	}
}
