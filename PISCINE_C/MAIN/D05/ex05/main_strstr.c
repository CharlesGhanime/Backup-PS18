/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 14:24:30 by cghanime          #+#    #+#             */
/*   Updated: 2018/09/14 14:18:21 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char*ft_strstr(char *str, char *to_find)
{
	unsigned int x;
	unsigned int y;
	unsigned int z;

	x = 0;
	y = 0;
	z = 0;
	if (*str == '\0' && *to_find == '\0')
		return (str);
	while (str[x] != '\0')
	{
		if (str[x] == to_find[y])
			z = x;
		while (str[x] == to_find[y])
		{
			x++;
			y++;
			if (to_find[y] == '\0')
				return (&str[z]);
		}
		y = 0;
		x = z++;
		x++;
	}
	return (0);
}

int main(void) 
{
	printf("%s\n", ft_strstr("tititototata", "toto"));
	printf("%s\n", strstr("tititototata", "toto"));
	return 0;
}

