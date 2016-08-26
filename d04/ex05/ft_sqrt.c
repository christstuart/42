/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstuart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/13 21:51:34 by cstuart           #+#    #+#             */
/*   Updated: 2016/08/13 21:51:35 by cstuart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int amount;
	int checknumber;

	if (nb == 1)
		return (1);
	else if (nb == 4)
		return (4);
	else
	{
		amount = nb / 2;
		while (amount)
		{
			checknumber = amount;
			checknumber *= amount;
			if (checknumber != nb)
			{
				amount--;
			}
			else
			{
				return (amount);
			}
		}
	}
	return (amount);
}
