/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_com2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstuart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/11 22:12:19 by cstuart           #+#    #+#             */
/*   Updated: 2016/08/11 22:12:21 by cstuart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char s)
{
	write(1, &s, 1);
	return (0);
}

void	writenumbers(int one, int second, int third, int fourth)
{
	ft_putchar(one + '0');
	ft_putchar(second + '0');
	ft_putchar(' ');
	ft_putchar(third + '0');
	ft_putchar(fourth + '0');
	if (one != 9)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_com2(void)
{
	int numarray[4];

	numarray[0] = 0;
	numarray[1] = 0;
	numarray[2] = 0;
	numarray[3] = 0;
	while (numarray[0] != 10)
	{
		if (numarray[3] < 10)
		{
			writenumbers(numarray[0], numarray[1], numarray[2], numarray[3]);
			numarray[3]++;
		}
		else if (numarray[2] < 10)
		{
			writenumbers(numarray[0], numarray[1], numarray[2], 9);
			numarray[2]++;
		}
		else if (numarray[1] < 9)
		{
			writenumbers(numarray[0], numarray[1], 9, 9);
			numarray[1]++;
		}
		else
		{
			writenumbers(numarray[0], 9, 9, 9);
			numarray[0]++;
		}
	}
}

int		main(void)
{
	ft_print_com2();
	return (0);
}
