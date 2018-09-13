/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strlowcase.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 04:03:21 by cghanime          #+#    #+#             */
/*   Updated: 2018/09/12 04:04:31 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int		main (int argc, char **argv)
{
	if (argc == 2)
		printf("%s", ft_strlowcase(argv[1]));
	return (0);
}

