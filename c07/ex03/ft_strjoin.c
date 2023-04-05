/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scuter <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/19 22:43:32 by scuter            #+#    #+#             */
/*   Updated: 2020/10/27 17:32:08 by scuter           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	return (&dest[i]);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*join;
	int		i;
	int		len;
	char	*dest;

	if (size == 0)
		return (malloc(sizeof(char)));
	len = -ft_strlen(sep);
	i = -1;
	while (++i < size)
		len = len + ft_strlen(strs[i]) + ft_strlen(sep);
	join = malloc(sizeof(char) * len + 1);
	i = 0;
	dest = join;
	while (i < (size - 1))
	{
		dest = ft_strcpy(dest, strs[i]);
		dest = ft_strcpy(dest, sep);
		i++;
	}
	dest = ft_strcpy(dest, strs[i]);
	*dest = 0;
	return (join);
}
