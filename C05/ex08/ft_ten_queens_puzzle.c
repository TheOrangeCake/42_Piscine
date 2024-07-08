/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoannguy <hoannguy@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 11:02:12 by hoannguy          #+#    #+#             */
/*   Updated: 2024/06/27 14:33:20 by hoannguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int fft_ten_queens_puzzle(void)
{
    int q;
    
    q = 0;
    while (q >= 0 && q <= 9)
    {
        write(1, &q, 1);
        queens(q);
        q++;
    }
}

int queens(int nb)
{
    int n;
    
    if ((n != nb) && (n != nb - 1) && (n != nb + 1))
        write(1, &n, 1);   
}