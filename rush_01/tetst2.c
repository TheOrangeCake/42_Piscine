/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tetst2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoannguy <hoannguy@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 11:03:50 by hoannguy          #+#    #+#             */
/*   Updated: 2024/06/30 17:51:01 by hoannguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int check_basic(char *tab, int pos);

int check(int count, char *Input, int pos);

int row_left (int pos , char *tab, char *Input, char max, int count);

int row_right (int pos , char *tab, char *Input, char max, int count);

int col_up(int pos , char *tab, char *Input, char max, int count);

int col_down(int pos , char *tab, char *Input, char max, int count);

// check all parameters
// int test_final_the_boss(char *tab, char*Input)
// {
// 	int i;
// 	int j;
// 	int pos ;
// 	char max;
// 	int count;
	
// 	if (col_up(pos,tab, Input, tab[0], 0 ) == 0)
// 	{
// 		printf("Test: %d/n", col_up(pos,tab, Input, tab[0], 0 ));
// 		return (0);
// 	}
// 	if (col_down(pos,tab, Input, tab[0], 0 ) == 0)
// 		return (0);
// 	if (row_left(pos,tab, Input, tab[0], 0 ) == 0)
// 		return (0);
// 	if (row_right(pos,tab, Input, tab[0], 0 ) == 0)
// 		return (0);
// 	return (1);
// }

int test_final_the_boss(char *tab, char*Input)
{
	int i;
	int j;
	int pos ;
	char max;
	int count;
	
	if (col_up(pos,tab, Input, tab[0], 0 ) == 0)
		return (0);
	if (col_down(pos,tab, Input, tab[0], 0 ) == 0)
		return (0);
	if (row_left(pos,tab, Input, tab[0], 0 ) == 0)
		return (0);
	if (row_right(pos,tab, Input, tab[0], 0 ) == 0)
		return (0);
	return (1);
}

// insert number into cell
#include<stdio.h>
int ft_insert(char *tab, int pos, char *Input)
{
	int i;
	
	i = 1;
	while (i <= 4)
	{
		// printf("g\n");
		tab[pos] = i + '0' ;
		if (check_basic(tab, pos) == 1)
		{
			if (pos == 15)
			{
				if (test_final_the_boss(tab, Input) == 1)
					return (0);
				else
					ft_insert(tab, 0, Input);
			}
			else
			{
				ft_insert(tab, pos + 1, Input);
			}
		}
		if (check_basic(tab, pos) == 0)
				ft_insert(tab, 0, Input);
		i++;
	}
	return (1);
}
