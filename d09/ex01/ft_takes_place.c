/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstuart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/19 13:30:15 by cstuart           #+#    #+#             */
/*   Updated: 2016/08/19 13:30:21 by cstuart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_takes_place(int hour)
{
	int	h;

	h = hour;
	if (hour > 12)
		h = hour - 12;
	if (hour == 0)
		h = 12;
	if (hour >= 0 && hour < 24)
	{
		printf("THE FOLLOWING TAKES PLACE BETWEEN ");
		if (hour < 11)
			printf("%d.00 A.M. AND %d.00 A.M.\n", h, (h + 1) % 12);
		else if (hour == 11)
			printf("11.00 A.M. AND 12.00 P.M.\n");
		else if (hour == 23)
			printf("11.00 P.M. AND 12.00 A.M.\n");
		else if (hour == 24)
			printf("12.00 A.M. AND 1.00 A.M.\n");
		else
			printf("%d.00 P.M. AND %d.00 P.M.\n", h, (h + 1) % 12);
	}
	printf("\n");
}
