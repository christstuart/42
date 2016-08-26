/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstuart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/15 12:58:58 by cstuart           #+#    #+#             */
/*   Updated: 2016/08/15 12:59:01 by cstuart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_putchar(char s)
{
	write(1, &s, 1);
	return (0);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		ft_putchar(nb + '0');
	}
}

int		main(void)
{	
	int res;

	res = 10;
	printf("Value of:%d\n", res);
	ft_putnbr(res);
	printf("\n");

	res = 2147483647;
	printf("Value of:%d\n", res);
	ft_putnbr(res);
	printf("\n");


	res = -2147483648;
	printf("Value of:%d\n", res);
	ft_putnbr(res);
	printf("\n");


	res = -10;
	printf("Value of:%d\n", res);
	ft_putnbr(res);
	printf("\n");


	res = 0;
	printf("Value of:%d\n", res);
	ft_putnbr(res);
	printf("\n");


	return (0);
}
