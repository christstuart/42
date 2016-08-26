/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checknumber.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstuart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/21 19:11:44 by cstuart           #+#    #+#             */
/*   Updated: 2016/08/21 19:11:45 by cstuart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		checknumber(int puzzle[][9], int row, int col, int num)
{
	int rowstart;
	int colstart;
	int i;

	rowstart = (row / 3) * 3;
	colstart = (col / 3) * 3;
	i = 0;
	while (i < 9)
	{
		if (puzzle[i][col] == num)
			return (0);
		if (puzzle[row][i] == num)
			return (0);
		if (puzzle[rowstart + (i % 3)][colstart + (i / 3)] == num)
			return (0);
		++i;
	}
	return (1);
}
