/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 15:15:58 by cghanime          #+#    #+#             */
/*   Updated: 2018/09/10 21:55:00 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int		ft_strcmp(char *s1, char *s2)
{
	int x;

	x = 0;
	while (s1[x] - s2[x] == 0)
	{
		x++;
	}
	if (s1[x] == '\0' && s2[x] == '\0')
		return (0);
	else
		return (s1[x] - s2[x]);
return (0);
}

int		main(int argc, char **argv)
{
	if (argc == 3)
		printf("%d", ft_strcmp(argv[1], argv[2]));
		printf("\n%d", strcmp(argv[1], argv[2]));
		
	return (0);
}
