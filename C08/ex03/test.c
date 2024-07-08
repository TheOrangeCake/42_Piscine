/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoannguy <hoannguy@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 16:33:53 by hoannguy          #+#    #+#             */
/*   Updated: 2024/07/02 16:55:35 by hoannguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_point.h"

void    set_point(t_point *point)
{
    point->x = 42;
    point->y = 21;
}

int	main(void)
{
	t_point	point;

	set_point(&point);
	return (0);
}