/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstuart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/15 12:54:04 by cstuart           #+#    #+#             */
/*   Updated: 2016/08/15 12:54:05 by cstuart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int			ft_putchar(char s)
{
	write(1, &s, 1);
	return (0);
}

void		ft_putstr(char *str)
{
	while (*str++)
	{
		ft_putchar(str[-1]);
	}
}

int	main()
{
	char str[] = "Hello\n";
	ft_putstr(str);

	char str2[] = "Hello3492\n4839das\r\n";
	ft_putstr(str2);
}
