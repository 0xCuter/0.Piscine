/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scuter <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 16:44:24 by scuter            #+#    #+#             */
/*   Updated: 2020/10/26 19:24:00 by scuter           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		is_separator(char c, char *charset)
{
	while (*charset)
	{
		if (c == *charset)
			return (1);
		charset++;
	}
	return (0);
}

int		word_count(char *str, char *charset)
{
	long long i;

	i = 0;
	while (*str)
	{
		if (!is_separator(*str, charset))
		{
			i++;
			while (*str && !is_separator(*str, charset))
				str++;
		}
		str++;
	}
	return (i);
}

void	ft_strcpy(char *dest, char *first, char *last)
{
	while (first < last)
	{
		*dest = *first;
		dest++;
		first++;
	}
	*dest = 0;
}

char	**ft_split(char *str, char *charset)
{
	char		**words;
	long long	i;
	char		*first;

	words = malloc(sizeof(char*) * (word_count(str, charset) + 1));
	if (!words)
		return (NULL);
	i = 0;
	while (*str)
	{
		if (!is_separator(*str, charset))
		{
			first = str;
			while (!is_separator(*str, charset) && *str)
				str++;
			words[i] = malloc(sizeof(char) * (str - first + 1));
			if (!words[i])
				return (NULL);
			ft_strcpy(words[i], first, str);
			i++;
		}
		str++;
	}
	words[i] = 0;
	return (words);
}
