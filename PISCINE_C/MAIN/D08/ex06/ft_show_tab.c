/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/19 01:31:57 by cghanime          #+#    #+#             */
/*   Updated: 2018/09/19 11:26:21 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

char **ft_split_whitespace(char *str);

char	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
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

void	ft_int_limit(void)
{
	ft_putchar('-');
	ft_putchar('2');
	ft_putchar('1');
	ft_putchar('4');
	ft_putchar('8');
	ft_putchar('4');
	ft_putchar('7');
	ft_putchar('3');
	ft_putchar('6');
	ft_putchar('4');
	ft_putchar('8');
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_int_limit();
	}
	else
	{
		if (nb >= 0 && nb <= 9)
		{
			ft_putchar(nb + 48);
		}
		if (nb < 0)
		{
			ft_putchar('-');
			nb = nb * -1;
		}
		if (nb >= 10)
		{
			ft_putnbr(nb / 10);
			ft_putnbr(nb % 10);
		}
	}
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

void	ft_show_tab(t_stock_par *par)
{
	int i;
	int j;

	i = 0;
	while (par[i].copy[j])
	{
		j = 0;
		while (par[i].copy[j])
		{
			ft_putchar(par[i].copy[j]);
			++i;
		}
		ft_putchar('\n');
		ft_putnbr(par[i].size_param);
		ft_putchar('\n');
		ft_print_words_tables(par[i].tab);
		++i;
	}
}

t_stock_par		*ft_param_to_tab(int ac, char **av)
{
	int	i;
	t_stock_par *p;

	if (!(p = (t_stock_par*)malloc(sizeof(t_stock_par) * (ac + 1))))
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

int main (int ac, char **av)
{
	t_stock_par *p;
	p = ft_param_to_tab(ac, av);
	ft_show_tab(p);
	return (0);
}

