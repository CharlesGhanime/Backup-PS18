/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 18:10:40 by cghanime          #+#    #+#             */
/*   Updated: 2018/09/13 02:37:07 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>


void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strcmp(char *s1, char *s2)
{
	int x;

	x = 0;
	while (s1[x] - s2[x] == 0)
	{
		x++;
	}
	if (s1[x] == '\0' && s2[x] == '\0')
		return (0);
	else
		return (s1[x] - s2[x]);
	return (0);
}



int		main(int argc, char **argv)
{
	int x;
	int y;
	int i;
	char *z;

	x = 0;
	y = 1;
	z = 0;
	if (argc > 1)
	{
		while (argv[y + 1] != '\0')
		{
			if (ft_strcmp(argv[y], argv[y + 1]) < 0)
			{
				z = argv[y];
				argv[y] = argv[y + 1];
				argv[y + 1] = z;
			}
		y++;
		}
	}
	return (0);
}
