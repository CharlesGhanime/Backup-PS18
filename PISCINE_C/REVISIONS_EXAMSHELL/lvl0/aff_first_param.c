/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_first_param.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/14 16:37:26 by cghanime          #+#    #+#             */
/*   Updated: 2018/09/21 00:38:15 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc > 1)
		while (argv[1][i] != '\0')
		{
			write (1, &argv[1][i], 1);
			i++;
		}
	write(1, "\n", 1);
	return (0);
}
