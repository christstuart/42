/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/14 11:03:04 by ncaron            #+#    #+#             */
/*   Updated: 2016/08/14 20:07:39 by ncaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

int		ft_check(int x, int y, int c, int r)
{
	if ((c == 0 && r == 0) || ((c == x - 1 && r == y - 1) && c != 0 && r != 0))
		return (1);
	if ((c == x - 1 && r == 0) || (c == 0 && r == y - 1))
		return (2);
	if (c == 0 || c == x - 1 || r == 0 || r == y - 1)
		return (3);
	return (0);
}

void	rush(int x, int y)
{
	int c;
	int r;

	if (x > 0 && y > 0)
	{
		r = 0;
		while (r < y)
		{
			c = 0;
			while (c < x)
			{
				if (ft_check(x, y, c, r) == 1)
					ft_putchar('A');
				else if (ft_check(x, y, c, r) == 2)
					ft_putchar('C');
				else if (ft_check(x, y, c, r) == 3)
					ft_putchar('B');
				else
					ft_putchar(' ');
				c++;
			}
			ft_putchar('\n');
			r++;
		}
	}
}
