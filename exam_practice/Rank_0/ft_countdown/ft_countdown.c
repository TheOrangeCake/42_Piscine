/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countdown.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoannguy <hoannguy@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 09:36:35 by hoannguy          #+#    #+#             */
/*   Updated: 2024/07/06 09:50:04 by hoannguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ======================================./0-0-ft_countdown.txt=========================================
// Assignment name  : ft_countdown
// Expected files   : ft_countdown.c
// Allowed functions: write
// --------------------------------------------------------------------------------

// Write a program that displays all digits in descending order, followed by a
// newline.

// Example:
// $> ./ft_countdown | cat -e
// 9876543210$
// $>
// ==========================================================================================

#include <unistd.h>

int	main(void)
{
    char i;

	i = '9';
	while (i >= '0' && i <= '9')
	{
		write(1, &i, 1);
		i--;
	}
	write(1, "\n", 1);
}