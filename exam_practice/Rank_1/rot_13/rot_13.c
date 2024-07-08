/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoannguy <hoannguy@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 15:00:36 by hoannguy          #+#    #+#             */
/*   Updated: 2024/07/06 15:20:23 by hoannguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ======================================./1-1-rot_13.txt=========================================
// Assignment name  : rot_13
// Expected files   : rot_13.c
// Allowed functions: write
// --------------------------------------------------------------------------------

// Write a program that takes a string and displays it, replacing each of its
// letters by the letter 13 spaces ahead in alphabetical order.

// 'z' becomes 'm' and 'Z' becomes 'M'. Case remains unaffected.

// The output will be followed by a newline.

// If the number of arguments is not 1, the program displays a newline.

// Example:

// $>./rot_13 "abc"
// nop
// $>./rot_13 "My horse is Amazing." | cat -e
// Zl ubefr vf Nznmvat.$
// $>./rot_13 "AkjhZ zLKIJz , 23y " | cat -e
// NxwuM mYXVWm , 23l $
// $>./rot_13 | cat -e
// $
// $>
// $>./rot_13 "" | cat -e
// $
// $>
// ==========================================================================================

#include <unistd.h>

char	upper(char c)
{
	if (c >= 'A' && c <= 'M')
		c = c + 13;
	else if (c >= 'N' && c <= 'Z')
		c = c - 13;
	return (c);
}

char	lower(char c)
{
	if (c >= 'a' && c <= 'm')
		c = c + 13;
	else if (c >= 'n' && c <= 'z')
		c = c - 13;
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
			else if (av[1][i] >= 'a' && av[1][i] <= 'z')
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

// The logic here is to convert the first half of alphabet with +13 and the later half
// with -13.