/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   box.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarette <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/17 10:38:40 by jbarette          #+#    #+#             */
/*   Updated: 2020/10/18 18:30:57 by jbarette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strlen(char *str);
void	generateSolution();

int		checkParams(char *str)
{
	int count;

	count = (ft_strlen(str) / 2) + 1;
	if (count == 16)
	{
		int i;
		int j;
		int nb[16];

		i = 0;
		j = 0;
		while (str[i] != '\0')
		{
			if ((str[i] != 32) && (str[i] < '1' || str[i] > '4'))
			{
				write(1, "Error\n", 6);
				return (0);
			}
			
			if (str[i] != 32)
			{
				nb[j] = str[i] - '0';
				j++;
			}
			i++;
		}
		
	}
	else
	{
		write(1, "Error\n", 6);
		return (0);
	}

	return (0);
}
