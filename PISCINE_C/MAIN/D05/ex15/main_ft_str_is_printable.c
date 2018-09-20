/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_str_is_printable.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/14 03:01:03 by cghanime          #+#    #+#             */
/*   Updated: 2018/09/14 03:05:12 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>

int		ft_str_is_printable(char *str)
{
	int x;

	x = 0;
	while (str[x] != '\0')
	{
		if (str[x] < 32 || str[x] > 126)
			return (0);
		x++;
	}
	return (1);
}

int main (int argc, char **argv)
{
	if (argc == 2)
		printf("%d", ft_str_is_printable(argv[1]));
	return (0);
}
