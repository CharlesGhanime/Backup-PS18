/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_evalexpr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/16 05:34:07 by cghanime          #+#    #+#             */
/*   Updated: 2018/09/16 05:39:28 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		do_op(int x, int y, char z)
{
	if (z == '+')
		return (x + y);
	if (z == '-')
		return (x - y);
	if (z == '*')
		return (x * y);
	if (z == '/')
		return (x / y);
	if (z == '%')
		return (x % y);
	return (0);
}

int		main(int argc, char **argv)
{
	if (argc == 3)
	printf("%d", do_op(atoi(argv[1]), atoi(argv[2]), '+'));
	return (0);
}
