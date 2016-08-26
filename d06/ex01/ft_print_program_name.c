/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstuart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/17 17:02:49 by cstuart           #+#    #+#             */
/*   Updated: 2016/08/17 17:02:51 by cstuart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_putchar(char c);

void		ft_putstr(char *str)
{
	while (*str++)
	{
		ft_putchar(str[-1]);
	}
}

int			main(int argc, char **argv)
{
	(void)argc;
	ft_putstr(argv[0]);
}
