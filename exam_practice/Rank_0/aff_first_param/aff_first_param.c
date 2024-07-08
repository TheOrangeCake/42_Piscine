/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_first_param.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoannguy <hoannguy@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 10:02:07 by hoannguy          #+#    #+#             */
/*   Updated: 2024/07/06 10:09:32 by hoannguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ======================================./0-1-aff_first_param.txt=========================================
// Assignment name  : aff_first_param
// Expected files   : aff_first_param.c
// Allowed functions: write
// --------------------------------------------------------------------------------

// Write a program that takes strings as arguments, and displays its first
// argument followed by a \n.

// If the number of arguments is less than 1, the program displays \n.

// Example:

// $> ./aff_first_param vincent mit "l'ane" dans un pre et "s'en" vint | cat -e
// vincent$
// $> ./aff_first_param "j'aime le fromage de chevre" | cat -e
// j'aime le fromage de chevre$
// $> ./aff_first_param
// $
// =======================================================================================

#include <unistd.h>

int	main(int ac, char *av[])
{
	int	i;

	i = 0;
	if (ac < 2)
		write(1, "\n", 1);
	else
	{
		while (av[1][i] != '\0')
		{
			write(1, &av[1][i], 1);
			i++;
		}
		write(1, "\n", 1);
	}
	return (0);
}