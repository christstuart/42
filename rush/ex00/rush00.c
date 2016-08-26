/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstuart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/14 19:49:55 by cstuart           #+#    #+#             */
/*   Updated: 2016/08/14 19:49:58 by cstuart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_putchar(char c);

void		rush(int x, int y)
{
	int	c;
	int	r;

	c = 1;
	r = 1;
	while (r <= y)
	{
		while (c <= x)
		{
			if ((c == x || c == 1) && (r == 1 || r == y))
				ft_putchar('o');
			else if ((c == x || c == 1) && r != 1 && r != y)
				ft_putchar('|');
			else if (r != y && r != 1 && c != x && c != 1)
				ft_putchar(' ');
			else
				ft_putchar('-');
			c++;
		}
		ft_putchar('\n');
		c = 1;
		r++;
	}
}
