/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_z.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoannguy <hoannguy@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 10:25:19 by hoannguy          #+#    #+#             */
/*   Updated: 2024/07/06 10:30:52 by hoannguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ======================================./0-2-aff_z.txt=========================================
// Assignment name  : aff_z
// Expected files   : aff_z.c
// Allowed functions: write
// --------------------------------------------------------------------------------

// Write a program that takes a string, and displays the first 'z'
// character it encounters in it, followed by a newline. If there are no
// 'z' characters in the string, the program writes 'z' followed
// by a newline. If the number of parameters is not 1, the program displays
// 'z' followed by a newline.

// Example:

// $> ./aff_z "abc" | cat -e
// z$
// $> ./aff_z "dubO a POIL" | cat -e
// z$
// $> ./aff_z "zaz sent le poney" | cat -e
// z$
// $> ./aff_z | cat -e
// z$
// ==========================================================================================

#include <unistd.h>

int	main(int ac, char *av[])
{
	int	i;

	i = 0;
	if (ac != 2)
		write(1, "z\n", 2);
	else
	{
		while (av[1][i] != '\0')
		{
			if (av[1][i] == 'z')
			{
				write(1, "z\n", 2);
				return (0);
			}
			i++;
		}
		write(1, "z\n", 2);
	}
	return (0);
}