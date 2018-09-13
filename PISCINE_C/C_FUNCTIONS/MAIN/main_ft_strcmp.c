/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strcmp.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 03:55:20 by cghanime          #+#    #+#             */
/*   Updated: 2018/09/12 03:56:08 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int		main(int argc, char **argv)
{
	if (argc == 3)
		printf("%d", ft_strcmp(argv[1], argv[2]));
	printf("\n%d", strcmp(argv[1], argv[2]));

	return (0);
}
