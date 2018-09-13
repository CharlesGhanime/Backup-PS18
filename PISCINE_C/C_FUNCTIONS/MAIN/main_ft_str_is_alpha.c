/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_str_is_alpha.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 04:11:03 by cghanime          #+#    #+#             */
/*   Updated: 2018/09/12 04:12:17 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int		main(int argc, c		har **argv)
{
	if (argc == 2)
		printf("%d", ft_str_is_alpha(argv[1]));
	return (0);
}

