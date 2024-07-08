/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoannguy <hoannguy@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 19:07:10 by hoannguy          #+#    #+#             */
/*   Updated: 2024/07/01 11:47:09 by hoannguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*ptr;
	int	*table;

	ptr = malloc((max - min) * sizeof(int));
	table = ptr;
	if (min >= max)
		return (NULL);
	while (min < max)
	{
		*ptr = min;
		min++;
		ptr++;
	}
	return (table);
}
/*
#include <stdio.h>

int main()
{
    int min = 9;
    int max = 9;
    int i = 0;
    int *ptr = ft_range(min, max);

    if (ptr == NULL)
    {
        printf("Error: ft_range returned NULL.\n");
        return 1;
    }
    while(i < max - min)
    {
        printf("test: %i\n", ptr[i]);
        i++;
    }
    return (0);
}
*/
