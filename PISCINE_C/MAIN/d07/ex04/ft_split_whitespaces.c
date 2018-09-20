/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/15 23:28:02 by cghanime          #+#    #+#             */
/*   Updated: 2018/09/18 01:25:54 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_chcounter(char *str, int i)
{
	int c;
	c = 0;
	while (str[i] != '\0' && str[i] != '\t' && str[i] != '\n' && str[i] != ' ')
	{
		c++;
		i++;
	}
	return (c - 1);
}

int		ft_wcounter(char *str)
{
	int wc;
	int i;

	i = 0;
	wc = 1;
	while (str[i] != '\0')
	{
		if ((str[i] == '\n' || str[i] == '\t' || str[i] == ' ') && 
		(str[i + 1] != '\n' && str[i + 1] != '\n' && str[i + 1] != ' '))
			wc++;
		i++;
	}
	return (wc);
}

char	**tabfill(char **res, char *str)
{
	int i;
	int j;
	int k;

	i = 0;
	j = 0;
	while (j <= ft_wcounter(str))
	{
		k = 0;
		if (str[i] != '\n' && str[i] != '\t' && str[i] != ' ')
			res[j] = (char*)malloc(ft_chcounter(str, i));
		while (str[i] != '\0' && str[i] != 8 && str[i] != 32 && str[i] != 10)
		{
			res[j][k] = str[i];
			k++;
			i++;
		}
		if (k != 0)
			j++;
		i++;
	}
	res[j] = 0;
	return (res);
}

char **ft_split_whitespaces(char *str)
{
	char **res;

	if (!(res = (char**)malloc(sizeof(char*) * (ft_wcounter(str) + 1))))
		return (0);
	res = tabfill(res, str);
	return (res);
}

int main(int c, char **v)
{
	int i = 0;
	char **res = ft_split_whitespaces(v[1]);
	while (res[i] != '\0')
	{
	printf("%s", res[i]);
	putchar('\n');
	i++;
	}
	return 0;
}
