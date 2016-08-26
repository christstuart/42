/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstuart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/11 20:00:28 by cstuart           #+#    #+#             */
/*   Updated: 2016/08/11 21:58:48 by cstuart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char s);

void	writespace(void)
{
	ft_putchar(',');
	ft_putchar(' ');
}

void	writenumbers(int one, int second, int third)
{
	ft_putchar(one + '0');
	ft_putchar(second + '0');
	ft_putchar(third + '0');
	if (one != 7)
	{
		writespace();
	}
}

void	ft_print_comb(void)
{
	int numarray[3];

	numarray[0] = 0;
	numarray[1] = 1;
	numarray[2] = 2;
	while (numarray[0] <= 10)
	{
		if (numarray[0] < numarray[1] && numarray[1] < numarray[2])
		{
			writenumbers(numarray[0], numarray[1], numarray[2]);
		}
		if (numarray[2] == 9)
		{
			numarray[1]++;
			numarray[2] = 2;
		}
		if (numarray[1] == 9)
		{
			numarray[1] = 0;
			numarray[0]++;
		}
		numarray[2]++;
	}
}
