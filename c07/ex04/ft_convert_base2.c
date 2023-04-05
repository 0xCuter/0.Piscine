/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scuter <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 19:01:13 by scuter            #+#    #+#             */
/*   Updated: 2020/10/28 11:03:48 by scuter           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		return_digits(char *base)
{
	int i;
	int j;

	i = 0;
	while (base[i])
	{
		if ((base[i] == '-') || (base[i] == '+') || (base[i] < 32) ||
		(base[i] > 127) || (base[i] == ' '))
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	if (i < 2)
		return (0);
	return (i);
}

int		return_index(char c, char *base)
{
	int i;

	i = 0;
	while (base[i])
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int		ft_atoi_base(char *str, int digits, char *base)
{
	int i;
	int sign;
	int tot;

	i = 0;
	sign = 1;
	tot = 0;
	while ((str[i] >= 9 && str[i] <= 13) || (str[i] == ' '))
		i++;
	while ((str[i] == '-') || (str[i] == '+'))
	{
		if (str[i] == '-')
			sign = -sign;
		i++;
	}
	while (return_index(str[i], base) != -1)
	{
		tot = tot * digits + (return_index(str[i], base));
		i++;
	}
	return (tot * sign);
}
