/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_par.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/19 18:11:27 by cghanime          #+#    #+#             */
/*   Updated: 2018/09/19 18:16:53 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STOCK_PAR_H
# define FT_STOCK_PAR_H

typedef struct s_stock_par
{
	int size_param;
	char *str;
	char *copy;
	char **tab;
}	t_stock_par;

char			**ft_split_whitespaces(char *str);

void			ft_show_tab(t_stock_par *par);

t_stock_par		*ft_param_to_tab(int ac, char **av);

void			ft_putchar(char c);

void			ft_putnbr(int nb);

void			ft_print_words_tables(char **tab);

#endif
