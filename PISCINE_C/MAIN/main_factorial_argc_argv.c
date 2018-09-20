/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_factorial_argc_argv.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 22:02:03 by cghanime          #+#    #+#             */
/*   Updated: 2018/09/07 16:45:14 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return(0);
}

int		ft_atoi(char *str)
{
	int x;
	int entier;
	int signe;

	x = 0;
	entier = 0;
	signe = 1;
	while ((str[x] == '\f') || (str[x] == '\t') || (str[x] == '\n') || 
	(str[x] == '\r') || (str[x] == '\v') || (str[x] == ' '))
		x++;
	if (str[x] == '-')
		signe = -1;
	if (str[x] == '-' || str[x] == '+')
		x++;
	while (str[x] >= '0' && str[x] <= '9')
	{
		entier = entier * 10 + (str[x] - '0');
		x++;
	}
	return (entier * signe);
}

int		ft_iterative_factorial(int nb)
{
	int i;
	int fact;

	i = 2;
	fact = nb;
	if (nb == 0 || nb == 1)
		return (1);
	if (nb < 0 || nb > 12)
		return (0);
	else
	{
		while (i < fact)
		{
			nb = nb * i;
			i++;
		}
	}
	return (nb);
}

int     main (int argc, char **argv)
{
	if (argc == 2)
		printf("%d", ft_iterative_factorial(ft_atoi(argv[1])));
	else
		printf("%d", ft_iterative_factorial(5));
	return (0);
}
