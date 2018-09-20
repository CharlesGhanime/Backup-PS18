/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/21 00:45:53 by cghanime          #+#    #+#             */
/*   Updated: 2018/09/21 00:52:20 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void print_bits(unsigned char octet)
{
	int i = 128;

	while(octet >= 0 && i)
	{
		(octet / i) ? write (1, "1", 1) : write (1, "0", 1);
	(octet / i) ? octet -= i : 0;
	i /= 2;
	}
}

void print_bits2(unsigned char octet)
{
	int i = 256;

	while(i >>= 1)
	(octet & i) ? write (1, "1", 1) : write (1, "0", 1);
}

int main()
{
	int n = 64;
	print_bits(n);
	write (1, "\n", 1);
	print_bits2(n);
	return (0);
}
