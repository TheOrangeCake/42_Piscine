/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoannguy <hoannguy@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 18:45:41 by hoannguy          #+#    #+#             */
/*   Updated: 2024/06/26 21:15:21 by hoannguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	while (i * i < nb)
	{
		i++;
	}
	if (i * i == nb)
		return (i);
	else
		return (0);
}
/*
#include <stdio.h>

int main()
{
    int test = ft_sqrt(8);
    printf("Test: %i\n", test);
    return (0);
}
*/
