/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoannguy <hoannguy@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 18:54:14 by hoannguy          #+#    #+#             */
/*   Updated: 2024/07/06 19:39:28 by hoannguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ======================================./2-0-last_word.txt=========================================
// Assignment name  : last_word
// Expected files   : last_word.c
// Allowed functions: write
// --------------------------------------------------------------------------------

// Write a program that takes a string and displays its last word followed by a \n.

// A word is a section of string delimited by spaces/tabs or by the start/end of
// the string.

// If the number of parameters is not 1, or there are no words, display a newline.

// Example:

// $> ./last_word "FOR PONY" | cat -e
// PONY$
// $> ./last_word "this        ...       is sparta, then again, maybe    not" | cat -e
// not$
// $> ./last_word "   " | cat -e
// $
// $> ./last_word "a" "b" | cat -e
// $
// $> ./last_word "  lorem,ipsum  " | cat -e
// lorem,ipsum$
// $>
// ========================================================================================

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	main(int ac, char *av[])
{
	int	i;

	if (ac == 2)
	{
		i = ft_strlen(av[1]) - 1;//count to put i to the end
		while (av[1][i] == ' ' || av[1][i] == '\t')//bypass white space
			i--;
		while (av[1][i] != ' ' && av[1][i] != '\t' && i >= 0)//go to the first letter of last word
			i--;
		i = i + 1;//because i-- went 1 case over
		while (av[1][i] != ' ' && av[1][i] != '\t' && av[1][i] != '\0')
		{
			write(1, &av[1][i], 1);
			i++;
		}
	}
	else
		write(1, "Only 1 parameter is allowed", 27);
	write(1, "\n", 1);
	return (0);
}

// The logic here is to go the end of the string, then start bypass whitespace,
// then go to the first letter of the last word then print. Attention on conditions!!!