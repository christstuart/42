/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstuart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/13 16:51:48 by cstuart           #+#    #+#             */
/*   Updated: 2016/08/13 16:51:49 by cstuart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_recursive_factorial(int nb)
{
	if (nb == 0)
	{
		return (1);
	}
	if (nb > 12 || nb <= 0)
	{
		return (0);
	}
	return (nb * ft_recursive_factorial(nb - 1));
}

int		main(void)
{
	int value;

	value = ft_recursive_factorial(4);
	printf("%d\n", value);
}
