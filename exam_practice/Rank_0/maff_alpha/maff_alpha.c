/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_alpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoannguy <hoannguy@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 09:56:25 by hoannguy          #+#    #+#             */
/*   Updated: 2024/07/06 10:00:45 by hoannguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


// ======================================./0-0-maff_alpha.txt=========================================
// Assignment name  : maff_alpha
// Expected files   : maff_alpha.c
// Allowed functions: write
// --------------------------------------------------------------------------------

// Write a program that displays the alphabet, with even letters in uppercase, and
// odd letters in lowercase, followed by a newline.

// Example:

// $> ./maff_alpha | cat -e
// aBcDeFgHiJkLmNoPqRsTuVwXyZ$
// =======================================================================================

#include <unistd.h>

int	main()
{
	char	i;
	char	j;

	i = 'a';
	j = 'B';
	while (j <= 'Z')
	{
		write(1, &i, 1);
		write(1, &j, 1);
		i += 2;
		j += 2;
	}
	write(1, "\n", 1);
	return (0);
}