/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_ultimate_range.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/16 16:08:33 by cghanime          #+#    #+#             */
/*   Updated: 2018/09/16 16:27:19 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int *tab;
	int x;

	if (min >= max)
		return (0);
	tab = (int*)malloc(sizeof(max - min) * sizeof(int));
	if (tab == NULL)
		return (0);
	x = 0;
	while (min <= max - 1)
	{
		tab[x] = min++;
		x++;
	}
	*range = tab;
	return (x);
}

int		main()
{
	int **t = {50};
	printf("%d", ft_ultimate_range(t, 5, 15));
	return (0);
}
