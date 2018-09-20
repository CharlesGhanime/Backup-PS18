/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/20 23:34:47 by cghanime          #+#    #+#             */
/*   Updated: 2018/09/21 00:10:24 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned char reverse_bit(unsigned char b)
{
	b = (b * 0x0202020202ULL & 0x010884422010ULL) % 0x3ff;
	return (b);
}

unsigned char reverse_bit2(unsigned char b)
{
	unsigned char r = 0;
	unsigned char_len = 8;

	while(char_len--)
	{
		r = (r << 1) | (b & 1);
		b >>= 1;
	}
	return (r);
}
int main (void)
{
	unsigned char c;

	c = '&';
	write (1, &c ,1);
	write (1, "\n", 1);
	c = reverse_bit2(c);
	write (1, &c, 1);
	write(1, "\n", 1);
	return (0);
}
