/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoannguy <hoannguy@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 15:48:47 by hoannguy          #+#    #+#             */
/*   Updated: 2024/07/07 16:08:21 by hoannguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ======================================./2-3-wdmatch.txt=========================================
// Assignment name  : wdmatch
// Expected files   : wdmatch.c
// Allowed functions: write
// --------------------------------------------------------------------------------

// Write a program that takes two strings and checks whether it's possible to
// write the first string with characters from the second string, while respecting
// the order in which these characters appear in the second string.

// If it's possible, the program displays the string, followed by a \n, otherwise
// it simply displays a \n.

// If the number of arguments is not 2, the program displays a \n.

// Examples:

// $>./wdmatch "faya" "fgvvfdxcacpolhyghbreda" | cat -e
// faya$
// $>./wdmatch "faya" "fgvvfdxcacpolhyghbred" | cat -e
// $
// $>./wdmatch "quarante deux" "qfqfsudf arzgsayns tsregfdgs sjytdekuoixq " | cat -e
// quarante deux$
// $>./wdmatch "error" rrerrrfiiljdfxjyuifrrvcoojh | cat -e
// $
// $>./wdmatch | cat -e
// $
// ==========================================================================================

#include <unistd.h>

int	check(char *str1, char *str2)
{
	int	i;
	int	j;
	
	i = 0;
	j = 0;
	while (str1[i] && str2[j])
	{
		if (str1[i] == str2[j])
		{
			i++;
			j++;
		}
		else
			j++;
	}
	if (str1[i] == '\0')
		return (1);
	else
		return (0);
}

int	main(int ac, char *av[])
{
	int	i;

	i = 0;
	if (ac == 3)
	{
		if (check(av[1], av[2]))
		{
			while (av[1][i])
			{
				write(1, &av[1][i], 1);
				i++;	
			}
		}
	}
	write(1, "\n", 1);
	return (0);
}

// The logic is to check each character of the first string agaisnt the second string,
// do not reset the second string counter. If string1 reached the end successfully, then
// print the word, if the second string reached the end before string1, then dont print.