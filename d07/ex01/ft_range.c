/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstuart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/18 16:36:22 by cstuart           #+#    #+#             */
/*   Updated: 2016/08/18 16:36:23 by cstuart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *values;
	int i;

	i = 0;
	values = (int*)malloc(sizeof(*values) * (max - min));
	while (min < max)
	{
		values[min] = min;
		min++;
	}
	return (values);
}
