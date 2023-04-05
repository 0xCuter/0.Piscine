/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scuter <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/16 16:23:31 by scuter            #+#    #+#             */
/*   Updated: 2020/10/19 20:21:28 by scuter           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int tot;

	tot = 1;
	if (power < 0)
		return (0);
	while (power)
	{
		tot = tot * nb;
		power--;
	}
	return (tot);
}
