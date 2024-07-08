/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoannguy <hoannguy@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 10:45:11 by hoannguy          #+#    #+#             */
/*   Updated: 2024/07/06 10:51:03 by hoannguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ======================================./1-0-ft_strlen.txt=========================================
// Assignment name  : ft_strlen
// Expected files   : ft_strlen.c
// Allowed functions: 
// --------------------------------------------------------------------------------

// Write a function that returns the length of a string.

// Your function must be declared as follows:

// int	ft_strlen(char *str);
// =========================================================================================

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

#include <stdio.h>

int	main(int ac, char *av[])
{
	if (ac != 2)
		printf("Only 1 argument allowed");
	else
	{
		printf("lenght: %d\n", ft_strlen(av[1]));
	}
	return (0);
}