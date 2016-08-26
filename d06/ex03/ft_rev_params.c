/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstuart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/17 19:53:50 by cstuart           #+#    #+#             */
/*   Updated: 2016/08/17 19:53:52 by cstuart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_putchar(char c);

void		ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		str++;
	}
	ft_putchar('\n');
}

int			main(int argc, char **argv)
{
	while (--argc)
	{
		ft_putstr(argv[argc]);
	}
	return (0);
}
