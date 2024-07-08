/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   *.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoannguy <hoannguy@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 16:09:24 by hoannguy          #+#    #+#             */
/*   Updated: 2024/07/07 16:41:03 by hoannguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ======================================./2-4-do_op.txt=========================================
// Assignment name  : do_op
// Expected files   : *.c, *.h
// Allowed functions: atoi, printf, write
// --------------------------------------------------------------------------------

// Write a program that takes three strings:
// - The first and the third one are representations of base-10 signed integers
//   that fit in an int.
// - The second one is an arithmetic operator chosen from: + - * / %

// The program must display the result of the requested arithmetic operation,
// followed by a newline. If the number of parameters is not 3, the program
// just displays a newline.

// You can assume the string have no mistakes or extraneous characters. Negative
// numbers, in input or output, will have one and only one leading '-'. The
// result of the operation fits in an int.

// Examples:

// $> ./do_op "123" "*" 456 | cat -e
// 56088$
// $> ./do_op "9828" "/" 234 | cat -e
// 42$
// $> ./do_op "1" "+" "-43" | cat -e
// -42$
// $> ./do_op | cat -e
// $
// ==========================================================================================

#include <stdio.h>
#include <stdlib.h>

int	operation(int a, int b, char c)
{
	int	d;
	
	if (c == '+')
		d = a + b;
	else if (c == '-')
		d = a - b;
	else if (c == '*')
		d = a * b;
	else if (c == '/')
		d = a / b;
	else if (c == '%')
		d = a % b;
	else
		return (0);
	return (d);
}

int main(int ac, char *av[])
{
	int	a;
	int	b;
	int	c;

	if (ac == 4)
	{
		a = atoi(av[1]);
		b = atoi(av[3]);
		c = operation(a, b, av[2][0]);
		printf("%d", c);
	}
	printf("\n");
	return (0);
}