/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoannguy <hoannguy@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 21:56:05 by hoannguy          #+#    #+#             */
/*   Updated: 2024/07/05 11:46:21 by hoannguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb)
{
	int	a;

	a = 2;
	if (nb <= 2)
		return (2);
	while (a <= nb / 2)
	{
		if (nb % a == 0)
		{
			a = 2;
			nb++;
		}
		a++;
	}
	return (nb);
}
/*
#include <stdio.h>
int main()
{
    int test = ft_find_next_prime(9408301);
    printf("Test: %i\n", test);
    return (0);
}
*/