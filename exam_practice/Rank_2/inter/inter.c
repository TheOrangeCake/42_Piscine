/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoannguy <hoannguy@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 18:28:54 by hoannguy          #+#    #+#             */
/*   Updated: 2024/07/07 12:20:23 by hoannguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ======================================./2-0-inter.txt=========================================
// Assignment name  : inter
// Expected files   : inter.c
// Allowed functions: write
// --------------------------------------------------------------------------------

// Write a program that takes two strings and displays, without doubles, the
// characters that appear in both strings, in the order they appear in the first
// one.

// The display will be followed by a \n.

// If the number of arguments is not 2, the program displays \n.

// Examples:

// $>./inter "padinton" "paqefwtdjetyiytjneytjoeyjnejeyj" | cat -e
// padinto$
// $>./inter ddf6vewg64f gtwthgdwthdwfteewhrtag6h4ffdhsd | cat -e
// df6ewg4$
// $>./inter "rien" "cette phrase ne cache rien" | cat -e
// rien$
// $>./inter | cat -e
// $
// =======================================================================================

#include <unistd.h>

int	check(char *str, char c, int len) //important len str2 est negative, if len str2 = 0, then conflict with str[i] = 0
{
	int	i;

	i = 0;
	while (str[i] && (i < len || len == -1))
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}
// if str1, then if c appeared before i length, then return 0
// if str2, then if c appeared in str2, then return 1

#include <stdio.h>

int	main(int ac, char *av[])
{
	int		i;
	
	i = 0;
	if (ac == 3)
	{
		while (av[1][i] != '\0') // loop str1
		{
			printf("Checking character: %c at index: %d\n", av[1][i], i);
			if (!(check(av[1], av[1][i], i)) && check(av[2], av[1][i], -1)) // check char in both str1 and str2
			{
				write(1, &av[1][i], 1);
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}

// The logic here is to check each character in first string 
// with string2, and
// with all character in string1 that have written before.