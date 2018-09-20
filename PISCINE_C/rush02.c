/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03_functions.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/01 16:20:16 by cghanime          #+#    #+#             */
/*   Updated: 2018/09/02 04:30:19 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int     ft_putchar(char c)
{
    write(1, &c, 1);
    return (0);
}

int      ft_rush_first_lines(int x)
{
    int i;

    i = 1;
    while (i <= x)
    {
        if (i <=  0)
        {
            break;
        }
        else if (i == 1 || i == x)
        {
            ft_putchar('A');
        }
        else
        {
            ft_putchar('B');
        }
        i++;
    }

    return (0);
}

int     ft_alternate_lines(int y)
{
    int i;

    i=1;
    while (i <= y)
    {
        if (i <= 0)
        {
            break;
        }
        else if (i == 1 || i == y)
        {
            ft_putchar('B');
        }
        else 
        {
            ft_putchar(' ');
        }
        i++;
    }
    return (0);
}

int      ft_rush_last_lines(int x)
{
    int i;

    i = 1;
    while (i <= x)
    {
        if (i <=  0)
        {
            break;
        }
        else if (i == 1 || i == x)
        {
            ft_putchar('C');
        }
        else
        {
            ft_putchar('B');
        }
        i++;
    }

    return (0);
}


int     rush(int x, int y)
{
    int j;

    j=1;
    while (j <= y)
    {
        if (j <= 0)
        {
            break;
        }
        else if (j == 1)
        {
            ft_rush_first_lines(x);
            ft_putchar('\n');
        }
        else if (j == y)
        {
            ft_rush_last_lines(y);
            ft_putchar('\n');
        }
        else
        {
            ft_alternate_lines(y);
            ft_putchar('\n');
        }

        j++;
    }
    return (0);
}

int main()
{
    rush( 5, 5);
    return (0);
}
