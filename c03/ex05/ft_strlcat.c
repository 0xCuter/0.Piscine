/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scuter <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/12 23:24:54 by scuter            #+#    #+#             */
/*   Updated: 2020/10/19 15:59:46 by scuter           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int j;
	unsigned int src_size;

	i = 0;
	while (dest[i])
		i++;
	src_size = 0;
	while (src[src_size])
		src_size++;
	if (size <= i)
		src_size += size;
	else
		src_size += i;
	j = 0;
	while (src[j] && (i + 1) < size)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = 0;
	return (src_size);
}
