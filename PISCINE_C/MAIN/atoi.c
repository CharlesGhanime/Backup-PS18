/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 16:46:27 by cghanime          #+#    #+#             */
/*   Updated: 2018/09/07 16:57:24 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_atoi(char *str)
{
	int x;
	int signe;
	int entier;

	x = 0;
	entier = 0;
	signe = 1;
	while ((str[x] == '\f') || (str[x] == '\t') || (str[x] == '\n') 
			|| (str[x] == '\r') || (str[x] == '\v') || (str[x] == ' '))
		x++;
	if (str[x] == '-')
		signe = -1;
	if (str[x] == '-' || str[x] == '+')
		x++;
	while (str[x] > '0' && str[x] < '9')
	{
		entier = entier * 10 + (str[x] - '0');
		x++;
	}
	return (entier * signe);
}

int main ()
{
	printf("%d", ft_atoi("123soleil"));
			return (0);
			}
