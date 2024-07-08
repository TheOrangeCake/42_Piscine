/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoannguy <hoannguy@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 14:50:37 by hoannguy          #+#    #+#             */
/*   Updated: 2024/07/07 15:19:09 by hoannguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ======================================./2-1-alpha_mirror.txt=========================================
// Assignment name  : alpha_mirror
// Expected files   : alpha_mirror.c
// Allowed functions: write
// --------------------------------------------------------------------------------

// Write a program called alpha_mirror that takes a string and displays this string
// after replacing each alphabetical character by the opposite alphabetical
// character, followed by a newline.

// 'a' becomes 'z', 'Z' becomes 'A'
// 'd' becomes 'w', 'M' becomes 'N'

// and so on.

// Case is not changed.

// If the number of arguments is not 1, display only a newline.

// Examples:

// $>./alpha_mirror "abc"
// zyx
// $>./alpha_mirror "My horse is Amazing." | cat -e
// Nb slihv rh Znzarmt.$
// $>./alpha_mirror | cat -e
// $
// $>
// ==========================================================================================

#include <unistd.h>

int	main(int ac, char *av[])
{
	int	i;

	i = 0;
	if (ac == 2)
	{
		while (av[1][i] != '\0')
		{
			if (av[1][i] >= 'a' && av[1][i] <= 'z')
				av[1][i] = 'z' - av[1][i] + 'a';
			else if (av[1][i] >= 'A' && av[1][i] <= 'Z')
				av[1][i] = 'Z' - av[1][i] + 'A';
			write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}


// The logic to convert is char = 'z' - char + 'a'