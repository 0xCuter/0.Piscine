/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scuter <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/20 14:15:54 by scuter            #+#    #+#             */
/*   Updated: 2020/10/20 14:16:01 by scuter           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	long long i;

	if (nb <= 1)
		return (0);
	if (nb <= 3)
		return (1);
	if (!(nb % 2) || !(nb % 3))
		return (0);
	i = 5;
	while (i * i <= nb)
	{
		if (!(nb % i))
			return (0);
		i += 2;
	}
	return (1);
}

int		ft_find_next_prime(int nb)
{
	while (1)
	{
		if (ft_is_prime(nb))
			return (nb);
		nb++;
	}
}
