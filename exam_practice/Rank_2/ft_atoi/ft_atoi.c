/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoannguy <hoannguy@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 17:05:14 by hoannguy          #+#    #+#             */
/*   Updated: 2024/07/06 17:52:50 by hoannguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ======================================./2-0-ft_atoi.txt=========================================
// Assignment name  : ft_atoi
// Expected files   : ft_atoi.c
// Allowed functions: None
// --------------------------------------------------------------------------------

// Write a function that converts the string argument str to an integer (type int)
// and returns it.

// It works much like the standard atoi(const char *str) function, see the man.

// Your function must be declared as follows:

// int	ft_atoi(const char *str);
// ==========================================================================================

int	ft_atoi(const char *str)
{
	int	i;
	int	nb;
	int sign;

	i = 0;
	nb = 0;
	sign = 1;
	while ((!(str[i] >= '0' && str[i] <= '9')) && str[i] != '\0')
	{
		if (str[i] == '-')
			sign = -sign;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10 + (str[i] - '0');
		i++;
	}
	return (nb * sign);
}

#include <stdio.h>

int	main(int ac, char* av[])
{
	int	result;
	
	if (ac == 2)
	{
		result = ft_atoi(av[1]);
		printf("Number: %d\n", result);
	}
	else
		printf("Only 1 argument allowed\n");
	return (0);
}