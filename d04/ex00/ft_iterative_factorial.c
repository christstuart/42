/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstuart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/13 10:55:35 by cstuart           #+#    #+#             */
/*   Updated: 2016/08/13 10:55:37 by cstuart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_iterative_factorial(int nb)
{
	int i;
	int returnvalue;

	i = 1;
	returnvalue = 1;
	if (nb < 0)
	{
		return (0);
	}
	if (nb == 0)
	{
		return (1);
	}
	while (i <= nb)
	{
		printf("%d\n", i);
		returnvalue *= i;
		i++;
	}
	return (returnvalue);
}

int		main(void)
{
	int value;

	value = ft_iterative_factorial(5);
	printf("%d\n", value);
	return (0);
}
