/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_revalpha.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoannguy <hoannguy@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 10:15:39 by hoannguy          #+#    #+#             */
/*   Updated: 2024/07/06 10:20:14 by hoannguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ======================================./0-1-maff_revalpha.txt=========================================
// Assignment name  : maff_revalpha
// Expected files   : maff_revalpha.c
// Allowed functions: write
// --------------------------------------------------------------------------------

// Write a program that displays the alphabet in reverse, with even letters in
// uppercase, and odd letters in lowercase, followed by a newline.

// Example:

// $> ./maff_revalpha | cat -e
// zYxWvUtSrQpOnMlKjIhGfEdCbA$
// ==========================================================================================

#include <unistd.h>

int	main()
{
	int	i;
	int	j;

	i = 'z';
	j = 'Y';
	while (j >= 'A')
	{
		write(1, &i, 1);
		write(1, &j, 1);
		i -= 2;
		j -= 2;
	}
	write(1, "\n", 1);
	return (0);
}