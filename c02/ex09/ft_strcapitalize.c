/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scuter <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/11 22:18:16 by scuter            #+#    #+#             */
/*   Updated: 2020/10/13 17:34:08 by scuter           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int i;
	int is_first;

	i = 0;
	is_first = 1;
	while (str[i])
	{
		if ((str[i] >= '0' && str[i] <= '9') ||
		(str[i] >= 'A' && str[i] <= 'Z') ||
		(str[i] >= 'a' && str[i] <= 'z'))
		{
			if (is_first && (str[i] >= 'a' && str[i] <= 'z'))
				str[i] = str[i] - 32;
			else if (!is_first && (str[i] >= 'A' && str[i] <= 'Z'))
				str[i] = str[i] + 32;
			is_first = 0;
		}
		else
			is_first = 1;
		i++;
	}
	return (str);
}
