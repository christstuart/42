/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstuart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/17 19:55:44 by cstuart           #+#    #+#             */
/*   Updated: 2016/08/17 19:55:45 by cstuart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_putchar(char c);

int			ft_strcmp(char *s1, char *s2)
{
	int result;

	while (*s1 == *s2)
	{
		s1++;
		s2++;
		if (*s1 == '\0')
		{
			return (0);
		}
	}
	result = (*(char *)s1 < *(char *)s2) ? -1 : +1;
	return (result);
}

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

void		ft_swap(char *a, char *b)
{
	char tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

int			main(int argc, char **argv)
{
	int i;
	int o;
	int valor;

	i = 1;
	o = 1;
	while (i < argc)
	{
		if (i > 1)
		{
			valor = ft_strcmp(argv[i], argv[i - 1]);
			if (valor < 0)
			{
				ft_swap(argv[i], argv[i - 1]);
				i = 1;
			}
		}
		i++;
	}
	while (o < argc)
	{
		ft_putstr(argv[o]);
		o++;
	}
	return (0);
}
