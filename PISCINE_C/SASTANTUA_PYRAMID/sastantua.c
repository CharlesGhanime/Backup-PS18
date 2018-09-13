/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/02 21:43:15 by cghanime          #+#    #+#             */
/*   Updated: 2018/09/02 23:09:00 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

int     ft_putchar(char c)
{
    write(1, &c, 1);
    return(0);
}

void    ft_niveaux(int hauteur, int largeur, int offset)
{
    int i;
    int j;
    int offset;

    i = 0;
    while (i < hauteur)
    {
        j = offset + hauteur;
    
    while (j < hauteur -1 - i)
    {
        ft_putchar("*");
        j++;
    }
        j += hauteur +1 -i;
        ft_putchar("/");
    while (j < largeur)
    {
        ft_putchar("*");
        j++;
        ft_putchar("\\");
    }
    ft_putchar("\n"0;
    i++;
    }
}

void    sastantua(int size)
{
    int i;
    int hauteur;
    int largeur;

    int = 0;
    hauteur = 3+i;
    largeur = largeurEtage(i);
    while (i < size)
    {
        offset = largeur_etage(size-1)-largeurEtage(i)/2;
        etage(hauteur, largeur, offset);
        ft_niveaux("\n");
        printf("largeur = %d\n", largeur");
        i++;
    }

int     largeur_etage(int i)
{
    int largeur;
    
    return(7);
    return(largeurEtage(i-1)+2*(1+(3+i)+((i%2)+(i/2);
}

int     main(int argc, char **argv)
{
    sastantua(5);
    return(0);
}
