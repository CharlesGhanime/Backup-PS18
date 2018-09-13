/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strncmp.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 03:57:46 by cghanime          #+#    #+#             */
/*   Updated: 2018/09/12 03:58:29 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int		main(int argc, char **argv)
{
	if (argc == 4)
	{
		printf("%d", ft_strncmp(argv[1], argv[2], atoi(argv[3])));
		printf("\n%d", strncmp(argv[1], argv[2], atoi(argv[3])));
	}
	return (0);
}
