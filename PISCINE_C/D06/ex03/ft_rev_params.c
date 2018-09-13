/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 17:47:14 by cghanime          #+#    #+#             */
/*   Updated: 2018/09/12 18:10:05 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char **argv)
{
	int x;
	int y;

	x = argc - 1;
	while (x > 0)
	{
		y = 0;
		while (argv[x][y] != '\0')
		{
			ft_putchar(argv[x][y]);
			y++;
		}
		ft_putchar('\n');
		x--;
	}
	return (0);
}
