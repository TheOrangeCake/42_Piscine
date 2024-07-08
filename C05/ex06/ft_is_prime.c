/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoannguy <hoannguy@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 21:23:24 by hoannguy          #+#    #+#             */
/*   Updated: 2024/06/27 10:39:23 by hoannguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	a;

	a = nb - 1;
	if (nb <= 1)
		return (0);
	if (nb == 2)
		return (1);
	while (a > 1 && a < nb)
	{
		if (nb % a == 0)
			return (0);
		a--;
	}
	return (1);
}
/*
#include <stdio.h>

int main()
{
    int test = ft_is_prime(5);
    printf("Test:\n0 = not prime\n1 = prime\nresult: %d\n", test);
    return (0);
}
*/
