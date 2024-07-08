/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoannguy <hoannguy@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 16:46:46 by hoannguy          #+#    #+#             */
/*   Updated: 2024/07/06 17:03:34 by hoannguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ======================================./1-4-rotone.txt=========================================
// Assignment name  : rotone
// Expected files   : rotone.c
// Allowed functions: write
// --------------------------------------------------------------------------------

// Write a program that takes a string and displays it, replacing each of its
// letters by the next one in alphabetical order.

// 'z' becomes 'a' and 'Z' becomes 'A'. Case remains unaffected.

// The output will be followed by a \n.

// If the number of arguments is not 1, the program displays \n.

// Example:

// $>./rotone "abc"
// bcd
// $>./rotone "Les stagiaires du staff ne sentent pas toujours tres bon." | cat -e
// Mft tubhjbjsft ev tubgg of tfoufou qbt upvkpvst usft cpo.$
// $>./rotone "AkjhZ zLKIJz , 23y " | cat -e
// BlkiA aMLJKa , 23z $
// $>./rotone | cat -e
// $
// $>
// $>./rotone "" | cat -e
// $
// $>
// ==========================================================================================

#include <unistd.h>

char	upper(char c)
{
	if (c >= 'A' && c <= 'Y')
		c = c + 1;
	else if (c == 'Z')
		c = 'A';
	return (c);
}

char	lower(char c)
{
	if (c >= 'a' && c <= 'y')
		c = c + 1;
	else if (c == 'z')
		c = 'a';
	return (c);
}

int	main(int ac, char *av[])
{
	int	i;

	i = 0;
	if (ac == 2)
	{
		while (av[1][i] != '\0')
		{
			if (av[1][i] >= 'A' && av[1][i] <= 'Z')
				av[1][i] = upper(av[1][i]);
			if (av[1][i] >= 'a' && av[1][i] <= 'z')
				av[1][i] = lower(av[1][i]);
			i++;
		}
		i = 0;
		while (av[1][i] != '\0')
		{
			write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}

// The logic is replace the string with value +1. Special cases being 'Z' and 'z'.
// Then print out the while string.