/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scuter <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/09 14:36:18 by scuter            #+#    #+#             */
/*   Updated: 2020/10/09 16:10:08 by scuter           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		min_index(int *tab, int size)
{
	int i;
	int min;

	i = 0;
	min = 0;
	while (i < size)
	{
		if (tab[i] < tab[min])
			min = i;
		i++;
	}
	return (min);
}

void	swap(int *ptr1, int *ptr2)
{
	int tmp;

	tmp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = tmp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int i;
	int *tmp1;
	int *tmp2;

	i = 0;
	while (i < size)
	{
		tmp1 = tab + i;
		tmp2 = tmp1 + min_index(tab + i, size - i);
		swap(tmp1, tmp2);
		i++;
	}
}
