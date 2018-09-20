/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/18 05:00:29 by cghanime          #+#    #+#             */
/*   Updated: 2018/09/18 05:00:34 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_wcounter(char *str)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (str[i])
	{
		while ((str[i] <= 13 && str[i] >= 8) || str[i] == 32)
			i++;
		if ((str[i] < 13 || str[i] > 8) && str[i] != 32 && str[i])
		{
			while ((str[i] < 13 || str[i] > 8) && str[i] != 32 && str[i])
				i++;
			j++;
		}
	}
	return (j);
}

char	**ft_malloc_in_words(char **dest, char *str)
{
	int i;
	int l;
	int w;

	w = 0;
	i = 0;
	l = 0;
	while (str[i])
	{
		while ((str[i] <= 13 && str[i] >= 8) || str[i] == 32)
			i++;
		if ((str[i] > 13 || str[i] < 8) && str[i] != 32 && str[i])
		{
			while ((str[i] > 13 || str[i] < 8) && str[i] != 32 && str[i])
			{
				i++;
				l++;
			}
			if (!(dest[w] = (char*)malloc(sizeof(char) * (l + 1))))
				return (0);
			w++;
		}
		l = 0;
	}
	return (dest);
}

void	ft_strcpy(char **dest, char *src)
{
	int i;
	int j;
	int k;

	k = 0;
	i = 0;
	while (src[i])
	{
		j = 0;
		while ((src[i] > 13 || src[i] < 8) && src[i] != 32 && src[i])
		{
			dest[k][j] = src[i];
			i++;
			j++;
		}
		if (j != 0)
		{
			dest[k][j] = '\0';
			k++;
		}
		while ((src[i] <= 13 && src[i] >= 8) || src[i] == 32)
			i++;
	}
}

char	**ft_split_whitespaces(char *str)
{
	char **dest;

	if (!(dest = (char**)malloc(sizeof(char*) * (ft_wcounter(str)) + 1)))
		return (0);
	dest[ft_wcounter(str)] = NULL;
	ft_malloc_in_words(dest, str);
	ft_strcpy(dest, str);
	return (dest);
}
