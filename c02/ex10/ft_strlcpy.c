/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scuter <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/12 14:29:18 by scuter            #+#    #+#             */
/*   Updated: 2020/10/13 18:51:15 by scuter           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int i;

	i = 0;
	while (i < (size - 1) && src[i] && size)
	{
		dest[i] = src[i];
		i++;
	}
	if (size)
		dest[i] = 0;
	while (src[i])
		i++;
	return (i);
}
