/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strcpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/13 14:41:30 by cghanime          #+#    #+#             */
/*   Updated: 2018/09/13 17:06:02 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src)
{
	int x;

	x = 0;
	while (src[x] !=	'\0')
	{
		dest[x] = src[x];
		x++;
	}
	dest[x] = src[x];
	return (dest);
}

int main (int argc, char **argv)
{
	if (argc == 3)
	{
		printf("%s\n", ft_strcpy(argv[1], argv[2]));
		printf("%s\n", strcpy(argv[1], argv[2]));
	}
	return (0);
}
