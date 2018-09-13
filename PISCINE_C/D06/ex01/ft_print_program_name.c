/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 17:03:34 by cghanime          #+#    #+#             */
/*   Updated: 2018/09/12 17:46:11 by cghanime         ###   ########.fr       */
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

	x = 0;
	while (argv[0][x] != '\0' && argc)
	{
		ft_putchar(argv[0][x]);
		x++;
	}
	ft_putchar('\n');
		return (0);
}
