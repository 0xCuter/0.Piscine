/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clean_dic.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcheiko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 19:35:26 by rcheiko           #+#    #+#             */
/*   Updated: 2020/10/25 19:35:30 by rcheiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <main.h>

char	*clean_dic(char *str)
{
	char	*tab;
	int		i;
	int		j;
	int		k;

	i = 0;
	k = 0;
	j = ft_strlen(str);
	if (!(tab = (char *)malloc(sizeof(char) * j + 1)))
		return (NULL);
	while (str[i])
	{
		if (str[i] == ' ')
			i++;
		else
		{
			tab[k] = str[i];
			i++;
			k++;
		}
	}
	tab[k] = '\0';
	return (tab);
}
