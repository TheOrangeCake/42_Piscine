/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_basic.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoannguy <hoannguy@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 12:40:24 by hoannguy          #+#    #+#             */
/*   Updated: 2024/06/30 15:15:03 by hoannguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
// check not the same number in column
int	col_check(char *board, int pos)
{
	if (pos < 0 || pos > 15)
		return (0);
	if (pos <= 3)
		return (1);
	if (pos >= 4 && pos <= 7 && board[pos] == board[pos - 4])
		return (0);
	if (pos >= 8 && pos <= 11 && (board[pos] == board[pos - 4]
			|| board[pos] == board[pos - 8]))
		return (0);
	if (pos >= 12 && pos <= 15 && (board[pos] == board[pos - 4]
			|| board[pos] == board[pos - 8]
			|| board[pos] == board[pos - 12]))
		return (0);
	return (1);
}

int row_check(char *board, int pos)
{
    int start;
    int i;

	start = (pos / 4) * 4;
	i = start;
	if (pos < 0 || pos > 15)
        return 0;
    while (i < pos)
    {
        if (board[i] == board[pos])
            return 0;
        i++;
    }

    return 1;
}
// check not the same number in both column & row
int check_basic(char *tab, int pos)
{
    if (col_check(tab, pos) == 0)
        return (0);
    if (row_check(tab, pos) == 0)
        return (0);
    return (1);
}
