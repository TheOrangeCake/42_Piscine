/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoannguy <hoannguy@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 11:55:28 by hoannguy          #+#    #+#             */
/*   Updated: 2024/06/21 14:57:22 by hoannguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_ft(int *nbr)
{
	*nbr = 104;
}

int	main(void)
{
	int	a;
	
	a = 0;
	ft_ft(&a);
	write(1, &a, 1);
	printf("%d \n", a);
	return (0);
}
