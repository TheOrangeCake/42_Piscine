/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoannguy <hoannguy@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 13:24:35 by hoannguy          #+#    #+#             */
/*   Updated: 2024/06/26 14:56:08 by hoannguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;

	i = nb;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (nb - 1 > 0)
	{
		i = i * (nb - 1);
		nb--;
	}
	return (i);
}
/*
#include <stdio.h>
int main()
{
    int test = ft_iterative_factorial(1);
    printf("Test: %i\n", test);
    return (0);
}
*/