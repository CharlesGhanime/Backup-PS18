/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MAIN.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/03 17:29:22 by cghanime          #+#    #+#             */
/*   Updated: 2018/09/05 13:11:19 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_print_alphabet(void);
void	ft_print_reverse_alphabet(void);
void	ft_print_numbers(void);
void	ft_is_negative(int n);
void	ft_print_comb(void);
void	ft_print_comb2(void);
void	ft_putnbr(int nb);
void	ft_putnbr(int nb);
void	ft_strlen(char *str);
void	ft_print_comb2(void);

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return(0);
}

int		main()
{
//	ft_print_alphabet();
//	ft_print_reverse_alphabet();
	ft_print_numbers();
//	ft_is_negative(100);
//	ft_print_comb();
//	ft_print_comb2();
//	ft_putnbr(5600);
	return (0);
}

