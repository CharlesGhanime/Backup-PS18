/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/18 17:00:20 by cghanime          #+#    #+#             */
/*   Updated: 2018/09/19 10:29:37 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_par.h"

char			ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[	i] != '\0')
	{
		i++;
	}
	return (i);
}

char			*ft_strdup(char *src)
{
	int		x;
	char	*ptr;

	x = 0;
	if (!(ptr = malloc(sizeof(char) * ft_strlen(src))))
		return (NULL);
	while (src[x] != '\0')
	{
		ptr[x] = src[x];
		x++;
	}
	ptr[x] = '\0';
	return (ptr);
}

s_stock_par		*ft_param_to_tab(int ac, char **av)
{
	int			i;
	s_stock_par *p;

	if (!(p = (s_stock_par*)malloc(sizeof(s_stock_par) * (ac + 1))))
		return (0);
	while (i < ac)
	{
		p[i].size_param = ft_strlen(av[i]);
		p[i].str = av[i];
		p[i].copy = ft_strdup(av[i]);
		p[i].tab = ft_split_whitespaces(av[i]);
		++i;
	}
	p[i].str = 0;
	return (p);
}
