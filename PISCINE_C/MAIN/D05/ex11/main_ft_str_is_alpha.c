/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_str_is_alpha.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 04:11:03 by cghanime          #+#    #+#             */
/*   Updated: 2018/09/14 02:38:32 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int		ft_str_is_alpha(char *str)
{
	int x;

	x = 0;
	while (str[x] != '\0')
	{
		if ((str[x] < 'A' ||  str[x] > 'Z') && (str[x] < 'a' || str[x] > 'z'))
			return (0);
		x++;
	}
	return (1);
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		printf("%d", ft_str_is_alpha(argv[1]));
	return (0);
}

