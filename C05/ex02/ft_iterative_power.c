/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoannguy <hoannguy@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 16:42:26 by hoannguy          #+#    #+#             */
/*   Updated: 2024/06/27 16:28:31 by hoannguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;

	i = nb;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else
	{
		while (power - 1 > 0)
		{
			i = i * nb;
			power--;
		}
		return (i);
	}
}
/*
#include <stdio.h>

int main()
{
    int test = ft_iterative_power(0, 0);
    printf("Test: %i\n", test);
    return (0);
}
*/
