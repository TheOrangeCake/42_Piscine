/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoannguy <hoannguy@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 18:32:21 by hoannguy          #+#    #+#             */
/*   Updated: 2024/07/07 19:21:54 by hoannguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ======================================./2-6-is_power_of_2.txt=========================================
// Assignment name  : is_power_of_2
// Expected files   : is_power_of_2.c
// Allowed functions: None
// --------------------------------------------------------------------------------

// Write a function that determines if a given number is a power of 2.

// This function returns 1 if the given number is a power of 2, otherwise it returns 0.

// Your function must be declared as follows:

// int	    is_power_of_2(unsigned int n);
// ==========================================================================================

#include <stdio.h>
#include <stdlib.h>

int	is_power_of_2(unsigned int n);

int	main(int ac, char *av[])
{
	int	i;

	if (ac == 2)
	{
		i = atoi(av[1]);
		printf("result: %d\n", is_power_of_2(i));
	}
	return (0);
}

int	is_power_of_2(unsigned int n)
{
	if (n == 2 || n == 1)
		return (1);
	if (n == 0)
		return (0);
	if (n >= 2 && n % 2 == 0)
	{
		return(is_power_of_2(n / 2));
	}
	else
		return (0);
}