/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstuart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/18 16:49:14 by cstuart           #+#    #+#             */
/*   Updated: 2016/08/18 16:49:16 by cstuart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int o;
	int *size;
	int returnsize;

	i = min;
	o = 0;
	returnsize = (max - min);
	if (min >= max)
	{
		*range = (void*)0;
		return (0);
	}
	else
	{
		size = (int*)malloc(sizeof((*size)) * (max - min));
		while (i < max)
		{
			size[o] = i;
			o++;
			i++;
		}
	}
	*range = size;
	return (returnsize);
}
