/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_words_tables.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 04:36:27 by cghanime          #+#    #+#             */
/*   Updated: 2018/09/18 00:34:42 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>


void	ft_putchar(char c)
{
	write(1, &c, 1);
}

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

char	**ft_split_whitespaces(char *str)
{
	char **res;

	if (!(res = (char**)malloc(sizeof(char*) * (ft_wcounter(str) + 1))))
		return (0);
	res = tabfill(res, str);
	return (res);
}

void	ft_print_words_tables(char **tab)
{
	int i;
	int j;

	i = 0;
	while (tab[i])
	{
		j = 0;
		while (tab[i][j])
		{
			ft_putchar(tab[i][j]);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

int main(int ac, char **av)
{
	char    **dest;

	if (ac > 1)
	{
		dest = ft_split_whitespaces(av[1]);
		ft_print_words_tables(dest);
	}
	return (0);
}
