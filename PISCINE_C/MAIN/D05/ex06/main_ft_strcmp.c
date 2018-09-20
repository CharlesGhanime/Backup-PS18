/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strcmp.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 03:55:20 by cghanime          #+#    #+#             */
/*   Updated: 2018/09/21 00:58:15 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int		ft_strcmp(char *s1, char *s2)
{

	while (*s1 || *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
	}
	return (0);
}

int		main(int argc, char **argv)
{
	if (argc == 2)
	{
	printf("%d\n", ft_strcmp(argv[1], argv[2]));
	printf("%d\n", strcmp(argv[1], argv[2]));
	}

	return (0);
}
