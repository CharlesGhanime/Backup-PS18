/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_atoi.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/13 16:59:25 by cghanime          #+#    #+#             */
/*   Updated: 2018/09/13 17:03:23 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int ft_atoi(char *str)
{
	int x;
	int entier;
	int signe;

	x = 0;
	entier = 0;
	signe = 1;
	while (str[x] == '\f' || str[x] == '\t' || str[x] == '\n' ||
			str[x] == '\r' || str[x] == '\v' || str[x] == ' ')
		x++;
	if (str[x] == '-')
	{
		signe = -1;
		x++;
	}
	if (str[x] == '-' || str[x] == '+')
		x++;
	while (str[x] >= '0' && str[x] <= '9')
	{
		entier = entier * 10 + (str[x] - '0');
		x++;
	}
	return (entier * signe);
}

int		main (int argc, char **argv)
{
	if (argc == 2)
	{
		printf("%d\n", ft_atoi(argv[1]));
		printf("%d\n", atoi(argv[1]));
	}
		return (0);
}
