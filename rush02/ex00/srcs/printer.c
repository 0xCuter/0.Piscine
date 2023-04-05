/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printer.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcheiko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 19:36:30 by rcheiko           #+#    #+#             */
/*   Updated: 2020/10/25 19:36:31 by rcheiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <main.h>

void	print_nbr(long nb, char **dict, int len, int *final)
{
	char *dict_nbr;

	if (nb == 0)
		return ;
	if (*final)
		write(1, " ", 1);
	*final = *final + 1;
	if (nb == -1)
	{
		put_str(dict[ft_index_of("0", dict, len) + 1]);
		return ;
	}
	dict_nbr = ft_itoa(nb);
	put_str(dict[ft_index_of(dict_nbr, dict, len) + 1]);
	return ;
}

void	print_tab(char *nb, char **dict, int len)
{
	write(1, " ", 1);
	put_str(dict[ft_index_of(nb, dict, len) + 1]);
	return ;
}

void	put_str(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}
