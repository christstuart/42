/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstuart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/17 16:58:55 by cstuart           #+#    #+#             */
/*   Updated: 2016/08/17 16:59:00 by cstuart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_putchar(char s);

void		ft_putstr(char *str)
{
	while (*str++)
	{
		ft_putchar(str[-1]);
	}
}