/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstuart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/30 02:07:02 by cstuart           #+#    #+#             */
/*   Updated: 2016/08/30 02:07:04 by cstuart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int oct;
	int	divv;

	divv = 128;
	oct = octet - '0';
	while (divv != 0)
	{
		if (divv <= oct)
		{
			write(1, "1", 1);
			oct = oct % divv;
		}
		else
		{
			write(1, "0", 1);
		}
		divv = divv / 2;
	}
}

int		main(void)
{
	unsigned char s;

	s = '3';
	print_bits(s);
	return (0);
}
