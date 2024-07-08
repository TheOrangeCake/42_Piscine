/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoannguy <hoannguy@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 20:46:13 by hoannguy          #+#    #+#             */
/*   Updated: 2024/07/02 08:32:01 by hoannguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = malloc((max - min) * sizeof(int));
	while (min < max)
	{
		(*range)[i++] = min;
		min++;
	}
	if (i >= 0)
		return (i);
	else
		return (-1);
}
/*
#include <stdio.h>

int main()
{
    int    *range;
    int    **ptr;
    int min;
    int max;
    int result;

    ptr = &range;
    min = -9;
    max = 9;
    result = ft_ultimate_range(ptr, min, max);
    printf("Test: %d\n", result);
    return (0);
}
*/