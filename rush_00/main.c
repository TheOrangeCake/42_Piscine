/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoannguy <hoannguy@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 20:39:02 by hoannguy          #+#    #+#             */
/*   Updated: 2024/06/22 17:24:50 by hoannguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>


void rush(int x, int y)
{
    int l;
    int h;

    h = 0;
    while(h <= y - 1)
    {
        while(l <= x - 1)
        {
            if(h == 0)
            {
                if(l == 0)
                {
                    write(1, "/", 1);
                }
                else if(l == x - 1)
                {
                    write(1, "\\", 1);
                }
                else
                {
                    write(1, "*", 1);
                }
            }
            
            else if(h == y - 1)
            {
                if(l == 0)
                {
                    write(1, "\\", 1);
                }
                else if(l == x - 1)
                {
                    write(1, "/", 1);
                }
                else
                {
                    write(1, "*", 1);
                }
            }

            else
            {
                if(l == 0)
                {
                    write(1, "*", 1);
                }
                else if(l == x - 1)
                {
                    write(1, "*", 1);
                }
                else
                {
                    write(1, " ", 1);
                }
            }
            l++;
        }
        h++;
        l = 0;
        write(1, "\n", 1);
    }
}

int main()
{
    int x;
    int y;
    
    x = 1;
    y = 0;
    rush(x, y);
    return (0);
}
