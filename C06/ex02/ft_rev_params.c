/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoannguy <hoannguy@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 18:31:55 by hoannguy          #+#    #+#             */
/*   Updated: 2024/06/27 18:41:21 by hoannguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;

	while (argc > 1)
	{
		i = 0;
		while (argv[argc - 1][i] != '\0')
		{
			write(1, &argv[argc - 1][i], 1);
			i++;
		}
		argc--;
		write(1, "\n", 1);
	}
	return (0);
}
