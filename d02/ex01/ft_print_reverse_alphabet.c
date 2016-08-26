/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstuart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/10 19:18:29 by cstuart           #+#    #+#             */
/*   Updated: 2016/08/10 19:18:31 by cstuart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char s)
{
	write(1, &s, 1);
	return (0);
}

void	ft_print_reverse_alphabet(void)
{
	char c;

	c = 'z';
	while (c >= 'a')
	{
		ft_putchar(c);
		--c;
	}
	return (0);
}

int		main(void)
{
	ft_print_reverse_alphabet();
	return (0);
}