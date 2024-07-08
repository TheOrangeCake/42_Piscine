/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoannguy <hoannguy@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 09:48:12 by hoannguy          #+#    #+#             */
/*   Updated: 2024/06/28 12:02:28 by hoannguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_print_comb2(void)
{
    int a;
    int b;
    int c;
    int d;

    a = '0';
    while (a <= '9')
    {
		b = '0';
        while (b <= '8')
        {
			c = '0';
            while (c <= '9')
            {
				d =  '0';
                while (d <= '9')
                {
                    if (a == c && b == d)
                    {
                        d++;
                        continue;
                    }
                    else
                    {
                        write(1, &a, 1);
                        write(1, &b, 1);
                        write(1, " ", 1);
                        write(1, &c, 1);
                        write(1, &d, 1);
                        if (!(a == '9' && b == '8' && c == '9' && d == '9'))
                        write(1, ", ", 2);
                    }
                    d++;
                }
                c++;
            }
            b++;
        }
        a++;
    }
}

int main()
{
    ft_print_comb2();
    return (0);
}