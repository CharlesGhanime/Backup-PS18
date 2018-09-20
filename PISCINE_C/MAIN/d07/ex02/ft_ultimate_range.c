/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/15 04:46:03 by cghanime          #+#    #+#             */
/*   Updated: 2018/09/17 22:53:02 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int *tab;
	int x;

	if (min >= max)
		tab = NULL;
		return (0);
	if(!(tab = (int*)malloc(sizeof(int) * (max - min))))
		return(0);
	x = 0;
	while (min <= max - 1)
	{
		tab[x] = min++;
		x++;
	}
	*range = tab;
	return (x);
}
