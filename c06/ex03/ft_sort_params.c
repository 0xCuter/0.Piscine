/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scuter <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/19 20:06:10 by scuter            #+#    #+#             */
/*   Updated: 2020/10/19 20:08:15 by scuter           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
	write(1, "\n", 1);
}

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	str_swap(char **str1, char **str2)
{
	char *tmp;

	tmp = *str1;
	*str1 = *str2;
	*str2 = tmp;
}

int		main(int argc, char **argv)
{
	int i;

	if (argc > 1)
	{
		i = 1;
		while (argv[i + 1])
		{
			if (ft_strcmp(argv[i], argv[i + 1]) > 0)
			{
				str_swap(&argv[i], &argv[i + 1]);
				i = 1;
			}
			else
				i++;
		}
		i = 1;
		while (argv[i])
		{
			ft_putstr(argv[i]);
			i++;
		}
	}
}
