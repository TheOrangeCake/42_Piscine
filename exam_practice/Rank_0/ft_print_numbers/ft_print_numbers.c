/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoannguy <hoannguy@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 09:48:47 by hoannguy          #+#    #+#             */
/*   Updated: 2024/07/06 09:53:05 by hoannguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ======================================./0-0-ft_print_numbers.txt=========================================
// Assignment name  : ft_print_numbers
// Expected files   : ft_print_numbers.c
// Allowed functions: write
// --------------------------------------------------------------------------------

// Write a function that displays all digits in ascending order.

// Your function must be declared as follows:

// void	ft_print_numbers(void);

// ==========================================================================================

#include <unistd.h>

void	ft_print_number(void)
{
	char	i;

	i = '0';
	while (i >= '0' && i <= '9')
	{
		write(1, &i, 1);
		i++;
	}
}

int	main()
{
	ft_print_number();
	return (0);
}