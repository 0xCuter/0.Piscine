/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   generateMap.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarette <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/17 13:58:59 by jbarette          #+#    #+#             */
/*   Updated: 2020/10/18 14:34:37 by jbarette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putchar(char c);

void    generateSolution(int *nb)
{
	int t[4][4];
	int i;
	int y;
	int x;

	i = 0;
	y = 0;
	x = 0;
	while (nb != '\0')
	{
		if (nb[i] == 4)
		{
			t[0][0] = 1;
			t[1][0] = 2;
			t[2][0] = 3;
			t[3][0] = 4;
		}
	}
	
	while (y < 4)
	{
		while (x < 4)
		{
			ft_putchar(t[y][x]);
			ft_putchar(' ');
			x--;
		}
		ft_putchar('\n');
		x = 0;
		y--;
	}
}
