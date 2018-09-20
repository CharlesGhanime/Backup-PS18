/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/13 03:18:07 by cghanime          #+#    #+#             */
/*   Updated: 2018/09/17 22:44:36 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	int x;
	char *ptr;

	x = 0;
	if(!(ptr = malloc(sizeof(char) * ft_strlen(src))))
		return (NULL);
	while (src[x] != '\0')
	{
		ptr[x] = src[x];
		x++;
	}
	ptr[x] = '\0';
	return (ptr);
}

int		main(int argc, char **argv)
{
		printf("%s\n", ft_strdup(argv[1]));
		printf("%s\n", strdup(argv[1]));
	return (0);
}
