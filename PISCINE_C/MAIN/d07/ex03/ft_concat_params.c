/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/15 05:19:30 by cghanime          #+#    #+#             */
/*   Updated: 2018/09/17 22:56:47 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_concat_params(int argc, char **argv)
{
	char *arg;
	int x;
	int y;
	int z;

	if(!(arg = malloc((argc) * sizeof(char))))
		return (0);
	x = 1;
	z = 0;
	while (x < argc)
	{
		y = 0;
		while (argv[x][y] != '\0')
		{
			arg[z] = argv[x][y];
			z++;
			y++;
		}
		if ((x + 1) < argc)
			arg[z] = '\n';
		z++;
		x++;
	}
	arg[z - 1] = '\0';
	return (arg);
}

int main(int c , char **v)
{
	if (c >= 1)
		printf("%s", ft_concat_params(c, v));
	return(0);
}
