/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoannguy <hoannguy@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 13:21:32 by hoannguy          #+#    #+#             */
/*   Updated: 2024/07/07 14:48:38 by hoannguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ======================================./2-0-union.txt=========================================
// Assignment name  : union
// Expected files   : union.c
// Allowed functions: write
// --------------------------------------------------------------------------------

// Write a program that takes two strings and displays, without doubles, the
// characters that appear in either one of the strings.

// The display will be in the order characters appear in the command line, and
// will be followed by a \n.

// If the number of arguments is not 2, the program displays \n.

// Example:

// $>./union zpadinton "paqefwtdjetyiytjneytjoeyjnejeyj" | cat -e
// zpadintoqefwjy$
// $>./union ddf6vewg64f gtwthgdwthdwfteewhrtag6h4ffdhsd | cat -e
// df6vewg4thras$
// $>./union "rien" "cette phrase ne cache rien" | cat -e
// rienct phas$
// $>./union | cat -e
// $
// $>
// $>./union "rien" | cat -e
// $
// $>
// ==========================================================================================

#include <unistd.h>

int	check_str1(char *str, char c, int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		if (str[i] == c)
			return (0);
		i++;
	}
	return (1);
}

int main(int ac, char *av[])
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (ac == 3)
	{
		while (av[1][i] != '\0')
		{
			if (check_str1(av[1], av[1][i], i))
				write(1, &av[1][i], 1);
			i++;
		}
		while (av[2][j] != '\0')
		{
			if (check_str1(av[1], av[2][j], i) && check_str1(av[2], av[2][j], j))
				write(1, &av[2][j], 1);
			j++;
		}
	}
	write(1, "\n", 1);
	return (0);
}

// The logic here is to write all unique characters of the first string,
// then compare characters from 2nd string to 1st string and itself.