/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoannguy <hoannguy@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 19:18:10 by hoannguy          #+#    #+#             */
/*   Updated: 2024/06/24 19:42:21 by hoannguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	a;

	a = 0;
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}
/*
int main()
{
    char    word1[50] = "hello, je suis un chat";
    
    ft_putstr(word1);
    return (0);
}
*/
