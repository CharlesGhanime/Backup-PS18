/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/16 16:13:47 by cghanime          #+#    #+#             */
/*   Updated: 2018/09/16 16:14:19 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

void	ft_check_size(char *str)
{
	char *start;

	star	t = str;
	while (*str != \n && *str)
	{
		width++;
		str++
	}
	str = start;
	while (*str)
	{
		if (*str == '\n')
			height++;
		str++;
	}
}

int		ft_check_first(char first, char middle, char last, char *str)
{
	int i;
	int res;

	res = 0;
	if (height > 0 && width > 0)
	{
		i = 0;
		while (i < width && str[i])
		{
			if (i == 0 && str[i] != first)
				res += str[i];
			else if (width >= 2 && i == width -1 && str[i] != last)
				res += str[i];
			else
				if (str[i] != middle)
					res +=str[i]
						i++;
		}
		if (i != width)
			return (1);
	}
	return (res);
}

int		ft_check_last(char first, char middle, char last, char *str)
{
	int i;
	int lines;

	i = 0;
	lines = 1;
	if (height >= 2 && width > 0)
	{
		while (str[i] && lines < height)
		{
			if (str[i] == '\n')
				lines++;
			i++;
		}
		if (lines == height)
			return (check_first(first, middle, last, &str[i]))
		else
			return (1);
	}
	return (0);
}
