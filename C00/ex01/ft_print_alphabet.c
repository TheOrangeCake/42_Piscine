/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoannguy <hoannguy@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 13:51:23 by hoannguy          #+#    #+#             */
/*   Updated: 2024/06/21 14:37:00 by hoannguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
    char    i;
    
    i   = 'a';
	while (i <= 'z')
    {
        write(1, &i, 1);
        i++;
    }
}

int main(void) {
    ft_print_alphabet();
    return(0);
}
