/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scuter <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/08 11:25:17 by scuter            #+#    #+#             */
/*   Updated: 2020/10/08 15:22:08 by scuter           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_nums(int num1, int num2)
{
	ft_putchar('0' + (num1 / 10));
	ft_putchar('0' + (num1 % 10));
	ft_putchar(' ');
	ft_putchar('0' + (num2 / 10));
	ft_putchar('0' + (num2 % 10));
	if (num1 != 98 || num2 != 99)
		write(1, ", ", 2);
}

void	ft_print_comb2(void)
{
	int num1;
	int num2;

	num1 = 0;
	while (num1 <= 98)
	{
		num2 = num1 + 1;
		while (num2 <= 99)
		{
			print_nums(num1, num2);
			num2++;
		}
		num1++;
	}
}
