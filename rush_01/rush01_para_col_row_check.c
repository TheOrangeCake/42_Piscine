/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01_para_col_row_check.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoannguy <hoannguy@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 10:29:45 by hoannguy          #+#    #+#             */
/*   Updated: 2024/06/30 17:35:24 by hoannguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_insert(char *tab, int pos, char *Input);

// check parameters: check for right format: only pair of number space, 
// last digit is without space max 16 numbers & 15 spaces
int	para_check(char *str)
{
	int	i;

	i = 0;
	while (str[i] && i <= 31)
	{
		if (i <= 28 && str[i] >= '1' && str[i] <= '4' && str[i + 1] == ' ')
			i += 2;
		else if (i == 30 && str[i] >= '1' && str[i] <= '4')
			return (0);
		else
			return (1);
	}
	return (1);
}

#include <stdio.h>
#include <unistd.h>
int main(int argc, char *argv[])
{
	int i;
	char tab[16];
	int	pos;
	
	i = 0;
    if (argc != 2 || para_check(argv[1]) == 1)
    {
		write(1, "Incorrect input format", 22);
		return (0);
	}
	while (i < 16)
	{
		tab[i] = '0';
		i++;
	}
	pos = 0;
	if (ft_insert(tab, pos, argv[1]) == 0)
	{
		i = 0;
		while (i < 16)
		{
			if (i % 4 == 0 && i > 0)
			write(1, "\n", 1);
			write(1, &tab[i], 1);
			i++;
		}
		return (0);
	}
	return (0);
}


// test functions col_check && row_check
/*
#include <stdio.h>

int main() {
    char board[16] = {
        1, 3, 2, 4,  // positions 0-3
        4, 1, 3, 2,  // positions 4-7
        3, 2, 4, 1,  // positions 8-11
        2, 3, 0, 0   // positions 12-15
    };

    int result_col = col_check(board, 13);
    if (result_col == 1)
        printf("Col check SUCCESS!! no duplicate!\n");
    else
        printf("Col check WARNING: found duplicates!!\n");
    
    int result_row = row_check(board, 13);
    if (result_row == 1)
        printf("Row check SUCCESS!! no duplicate!\n");
    else
        printf("Row check WARNING: found duplicates!!\n");
    return 0;
}
*/