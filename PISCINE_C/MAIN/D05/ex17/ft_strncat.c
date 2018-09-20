/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/14 03:36:18 by cghanime          #+#    #+#             */
/*   Updated: 2018/09/14 14:24:57 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>

char*ft_strncat(char *dest, char *src, int nb)
{
	int x;
	int len;

	x = 0;
	len = 0;
	while (dest[len] != '\0')
		len++;
	while ((src[x] != '\0') && (x < nb))
	{
		dest[len] = src[x];
		len++;
		x++;
	}
	dest[len++] = '\0';
	return (dest);
}

int		main(int argc, char **argv)
{
	if (argc == 4)
		printf("%s\n", ft_strncat(argv[1], argv[2], atoi(argv[3])));
		//printf("%s\n", strncat(argv[1], argv[2], atoi(argv[3])));

	return (0);
}
