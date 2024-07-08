/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoannguy <hoannguy@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 13:51:25 by hoannguy          #+#    #+#             */
/*   Updated: 2024/07/06 14:11:13 by hoannguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ======================================./1-0-search_and_replace.txt=========================================
// Assignment name  : search_and_replace
// Expected files   : search_and_replace.c
// Allowed functions: write, exit
// --------------------------------------------------------------------------------

// Write a program called search_and_replace that takes 3 arguments, the first 
// arguments is a string in which to replace a letter (2nd argument) by
// another one (3rd argument).

// If the number of arguments is not 3, just display a newline.

// If the second argument is not contained in the first one (the string)
// then the program simply rewrites the string followed by a newline.

// Examples:
// $>./search_and_replace "Papache est un sabre" "a" "o"
// Popoche est un sobre
// $>./search_and_replace "zaz" "art" "zul" | cat -e
// $
// $>./search_and_replace "zaz" "r" "u" | cat -e
// zaz$
// $>./search_and_replace "jacob" "a" "b" "c" "e" | cat -e
// $
// $>./search_and_replace "ZoZ eT Dovid oiME le METol." "o" "a" | cat -e
// ZaZ eT David aiME le METal.$
// $>./search_and_replace "wNcOre Un ExEmPle Pas Facilw a Ecrirw " "w" "e" | cat -e
// eNcOre Un ExEmPle Pas Facile a Ecrire $
// ==========================================================================================

#include <unistd.h>

int	main(int ac, char *av[])
{
	int	i;
	int	j;

	i = 0;
	if (ac != 4)
		write(1, "\n", 1);
	else
	{
		while (av[1][i] != '\0')
		{
			if (av[1][i] == av[2][0])
			{
				av[1][i] = av[3][0];
				j = 1;
			}
			i++;
		}
		i = 0;
		while (av[1][i] != '\0')
		{
			write(1, &av[1][i], 1);
			i++;
		}
		if (j != 1)
			write(1, "\n", 1);
	}
	return (0);
}

// The logic is to replace the string with new character, then print out the string,
// then add new line.