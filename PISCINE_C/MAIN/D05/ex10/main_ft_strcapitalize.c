/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strcapitalize.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 04:05:48 by cghanime          #+#    #+#             */
/*   Updated: 2018/09/13 22:10:08 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int x;

	x = 0;
	while	 (str[x] != '\0')
	{
		if (str[x] >= 65 && str[x] <= 90)
		{
			str[x] = str[x] + 32;
		}
		x++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int		x;

	x = 0;
	ft_strlowcase(str);
	while (str[x] != '\0')
	{
		if (str[0] >= 97 && str[0] <= 122)
			str[x] = str[x] - 32;
		else if ((str[x] >= 32 && str[x] <= 47) || (str[x] >= 58
					&& str[x] <= 64) || (str[x] >= 91 && str[x] <= 96) ||
				(str[x] >= 123 && str[x] <= 126))
		{
			if (str[x + 1] >= 97 && str[x + 1] <= 122)
				str[x + 1] = str[x + 1] - 32;
		}
		x++;
	}
	return (str);
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		printf("%s", ft_strcapitalize(argv[1]));
	return (0);
}

