/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scuter <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/12 16:16:59 by scuter            #+#    #+#             */
/*   Updated: 2020/10/14 18:01:33 by scuter           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_digit(unsigned char digit)
{
	digit = digit + '0';
	if (digit > '9')
		digit = digit + 39;
	write(1, &digit, 1);
}

void	print_hex(unsigned char dec)
{
	write(1, "\\", 1);
	print_digit((int)dec / 16);
	print_digit((int)dec % 16);
}

void	ft_putstr_non_printable(char *str)
{
	while ((unsigned char)*str)
	{
		if ((unsigned char)*str < ' ' || (unsigned char)*str > 126)
		{
			print_hex((unsigned char)*str);
		}
		else
			write(1, str, 1);
		str++;
	}
}
