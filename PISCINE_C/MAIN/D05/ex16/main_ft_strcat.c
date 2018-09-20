/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strcat.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/14 03:07:47 by cghanime          #+#    #+#             */
/*   Updated: 2018/09/14 03:30:23 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>

char*ft_strcat(char *dest, char *src)
{
	int x;
	int y;

	x = 0;
	while (dest[x] != '\0')
		x++;
	y = 0;
	while (src[y] != '\0')
	{
		dest[x] = src[y];
		x++;
		++y;
	}
	dest[x] = '\0';
	return (dest);
}

int		main(int argc, char **argv)
{
	if (argc == 3)
	{
		printf("%s\n", ft_strcat(argv[1], argv[2]));
		printf("%s\n", strcat(argv[1], argv[2]));
	}
	return (0);
}
