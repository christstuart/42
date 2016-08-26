/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstuart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/21 15:38:33 by cstuart           #+#    #+#             */
/*   Updated: 2016/08/21 15:38:35 by cstuart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putchar(char s);
void	ft_ptstr(char *str);
int		str_lenght(char *str);
int		checknumber(int puzzle[][9], int row, int col, int num);

int		checkargv(char s)
{
	char *error;

	if (s == '1' || s == '2' || s == '3' || s == '4' ||
		s == '5' || s == '6' || s == '7' || s == '8' ||
		s == '9' || s == '.')
	{
		return (1);
	}
	else
	{
		error = "Error\n";
		ft_ptstr(error);
		return (0);
	}
}

void        print(int pos[9][9])
{
    int		i;
    int		j;

	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			ft_putchar(pos[i][j] + 48);
			if (j != 8)
				ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
    }
}

void	addnumbers(int array[9][9], int row, int column)
{
	int newrow;
	int newcolumn;
	int i;
	int o;
	int num;

	i = 1;
	o = 0;
	num = 0;
	newrow = row;
	newcolumn = row;
	while (i != newrow)
	{
		while (o != newcolumn)
		{
			if (array[i][o] == -2)
			{
				while (num < 10)
				{
					array[i][o] = 10;
					num++;
				}
			}
			o++;
		}
		i++;
	}
	print(array);
}

int		main(int argc, char **argv)
{
	int i;
	int count;
	int o;
	int array[9][9];
	int num;
	int s;

	i = 1;
	o = 0;
	s = 0;
	count = 0;
	if (argc == 10)
	{
		while (i < 10)
		{
			o = 0;
			count = str_lenght(argv[i]);
			while (o < count)
			{
				if (checkargv(argv[i][o]) == 1)
				{
					num = argv[i][o];
					num = num - '0';
					array[s][o] = num;
				}
				++o;
			}
			s++;
			++i;
		}
		addnumbers(array, o, i);
	}
	return (0);
}
