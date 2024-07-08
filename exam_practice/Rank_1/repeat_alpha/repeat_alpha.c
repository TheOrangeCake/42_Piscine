/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoannguy <hoannguy@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 10:51:55 by hoannguy          #+#    #+#             */
/*   Updated: 2024/07/06 14:12:44 by hoannguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


// ======================================./1-0-repeat_alpha.txt=========================================
// Assignment name  : repeat_alpha
// Expected files   : repeat_alpha.c
// Allowed functions: write
// --------------------------------------------------------------------------------

// Write a program called repeat_alpha that takes a string and display it
// repeating each alphabetical character as many times as its alphabetical index,
// followed by a newline.

// 'a' becomes 'a', 'b' becomes 'bb', 'e' becomes 'eeeee', etc...

// Case remains unchanged.

// If the number of arguments is not 1, just display a newline.

// Examples:

// $>./repeat_alpha "abc"
// abbccc
// $>./repeat_alpha "Alex." | cat -e
// Alllllllllllleeeeexxxxxxxxxxxxxxxxxxxxxxxx.$
// $>./repeat_alpha 'abacadaba 42!' | cat -e
// abbacccaddddabba 42!$
// $>./repeat_alpha | cat -e
// $
// $>
// $>./repeat_alpha "" | cat -e
// $
// $>
// ==========================================================================================

#include <unistd.h>
#include <stdio.h>

int	main(int ac, char *av[])
{
	int	i;
	int	j;
	
	i = 0;
	if (ac != 2)
		write(1, "\n", 1);
	else
	{
		while (av[1][i] != '\0')//loop through the word
		{
			if (av[1][i] >= 'A' && av[1][i] <= 'Z')//if uppercase alpha
				j = av[1][i] - 'A';
			if (av[1][i] >= 'a' && av[1][i] <= 'z')//if lowercase alpha
				j = av[1][i] - 'a';
			while (j >= 0)//loop to write the repeat character
			{
				write(1, &av[1][i], 1);
				j--;//write j + 1 times 
			}
			if (!(av[1][i] >= 'A' && av[1][i] <= 'Z') && !(av[1][i] >= 'a' && av[1][i] <= 'z'))
				write(1, &av[1][i], 1);
			i++;//move to next character
		}
	}
	return (0);
}

// The logic here is to do ascii - 'a' or - 'A' to find the alphabetic index, then
// repeat that letter as many time as the index