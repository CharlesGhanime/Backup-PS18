/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 14:24:30 by cghanime          #+#    #+#             */
/*   Updated: 2018/09/10 15:13:28 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char*ft_strstr(char *str, char *to_find)
{
	int x;
	int y;

	x = 0;
	y = 0;
	while (str[x] != '\0')
	{
		y = 0;
		while (str[x + y] == to_find[y])
		{
			if (to_find[y+x] == '\0')
				return (&str[x]);
			y++;
		}
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

