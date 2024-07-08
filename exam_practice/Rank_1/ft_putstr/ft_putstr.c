/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoannguy <hoannguy@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 15:55:29 by hoannguy          #+#    #+#             */
/*   Updated: 2024/07/06 16:00:07 by hoannguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ======================================./1-2-ft_putstr.txt=========================================
// Assignment name  : ft_putstr
// Expected files   : ft_putstr.c
// Allowed functions: write
// --------------------------------------------------------------------------------

// Write a function that displays a string on the standard output.

// The pointer passed to the function contains the address of the string's first
// character.

// Your function must be declared as follows:

// void	ft_putstr(char *str);
// =========================================================================================

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int main(int ac, char *av[])
{
	if (ac == 2)
		ft_putstr(av[1]);
	else
		write(1, "Only 1 argument allowed!", 24);
	return (0);
}