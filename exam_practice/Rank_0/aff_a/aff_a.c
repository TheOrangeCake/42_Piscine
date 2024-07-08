/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoannguy <hoannguy@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 09:25:03 by hoannguy          #+#    #+#             */
/*   Updated: 2024/07/06 09:35:53 by hoannguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ======================================./0-0-aff_a.txt=========================================
// Assignment name  : aff_a
// Expected files   : aff_a.c
// Allowed functions: write
// --------------------------------------------------------------------------------

// Write a program that takes a string, and displays the first 'a' character it
// encounters in it, followed by a newline. If there are no 'a' characters in the
// string, the program just writes a newline. If the number of parameters is not
// 1, the program displays 'a' followed by a newline.

// Example:

// $> ./aff_a "abc" | cat -e
// a$
// $> ./aff_a "dubO a POIL" | cat -e
// a$
// $> ./aff_a "zz sent le poney" | cat -e
// $
// $> ./aff_a | cat -e
// a$

#include <unistd.h>

int main(int ac, char *av[])
{

    int i;

    i = 0;
    if (ac != 2)
        write(1, "a\n", 2);
    else
    {
        while (av[1][i] != '\0')
        {
            if (av[1][i] == 'a')
            {
                write(1, "a\n", 2);
                return (0);
            }
            else
                i++;
        }
        write(1, "\n", 1);
    }
    return (0);
}
