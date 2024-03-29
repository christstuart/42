/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstuart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/22 23:11:02 by cstuart           #+#    #+#             */
/*   Updated: 2016/08/22 23:11:03 by cstuart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_any(char **tab, int (*f)(char*))
{
	int	i;

	i = 0;
	while (tab[i][0] != '\0')
	{
		if (f(tab[i]) == 1)
			return (1);
		i++;
	}
	return (0);
}
