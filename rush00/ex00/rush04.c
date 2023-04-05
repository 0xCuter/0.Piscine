/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpillet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/10 19:21:18 by jpillet           #+#    #+#             */
/*   Updated: 2020/10/10 19:21:22 by jpillet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_line(int x, char *line)
{
	ft_putchar(line[0]);
	while (x > 2)
	{
		ft_putchar(line[1]);
		x--;
	}
	if (x > 1)
		ft_putchar(line[2]);
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	char	*l1;
	char	*l2;
	char	*l3;

	l1 = "ABC";
	l2 = "B B";
	l3 = "CBA";
	if (x > 0 && y > 0)
	{
		ft_print_line(x, l1);
		while (y > 2)
		{
			ft_print_line(x, l2);
			y--;
		}
		if (y > 1)
			ft_print_line(x, l3);
	}
}
