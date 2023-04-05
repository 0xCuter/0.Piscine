/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   resolve.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scuter <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/18 19:43:16 by scuter            #+#    #+#             */
/*   Updated: 2020/10/18 20:47:25 by scuter           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		**gen_combs(void)

int		is_visible(int b1, int b2)
{
	int result;

	result = b1 - b2;

	if (result > 0)
		return (0);
	else
		return (1);
}

int		visible_blds(int *blds)
{
	int i;
	int j;
	int count;

	i = 0;
	j = 1;
	count = 1;
	while (i < 4 && j < 4)
	{
		if (is_visible(blds[i], blds[j]))
		{
			count++;
			i = j;
		}
		j++;
	}
	return (count);
}

int		rev_visible_blds(int *blds)
{
	int i;
	int rev[4];

	i = 0;
	while (i < 4)
	{
		rev[3 - i] = blds[i];
		i++;
	}
	return (visible_blds(&rev[0]));
}

int		check_tab(int **tab, int *str)
{
	int i;

	i = 0;
	while (i < 4)
	{
		if (visible_blds(tab[][i]) != str[i])
			return (0);
		if (rev_visible_blds(tab[i]) != str[4 + i])
			return (0);
		if (rev_visible_blds(tab[][3 - i]) != str[8 + i])
			return (0);
		if (visible_blds(tab[3 - i]) != str[12 + i])
			return (0);
	i++;
	}
	return (1);
	}	

int		**resolve(int *str)
{
	int comb[25][4];
	comb = gen_combs;
	comb[24] = 0;

	int tab[4][4];
	int i;
	int j;
	int k;
	int l;

	i = 0;
	j = 0;
	k = 0;
	l = 0;
	while (comb[i])
	{
		tab[0] = comb[i];
		while (comb[j])
		{
			tab[1] = comb[j];
			while (comb[k])
			{
				tab[2] = comb[k];
				while (comb[l])
				{
					tab[3] = comb[l];
					if (check_tab(&&tab[0], str))
						return (&&tab[0]);
					l++;
				}
			k++;
			}
		j++;
		}
	i++;
	}
	write(1, Error\n, 6);
	return ;
}
