/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_final.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoannguy <hoannguy@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 11:03:24 by hoannguy          #+#    #+#             */
/*   Updated: 2024/06/30 17:03:21 by hoannguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int check(int count, char *Input, int pos)
{
	if (count != Input[pos] - '0')
		return(0);
	return(1);
}

// check left parameters
int row_left (int pos , char *tab, char *Input, char max, int count)
{
	int i ;

	i = 0 ;
	while (i <= 15)
	{
		if (i % 4 == 0 && i > 1)
		{
			if ( check(count, Input, pos) == 0)
				return(0);
			count = 0;
			max = tab[i];
			pos = pos + 2;
		}
		else if (max < tab[i])
		{
			count ++;
			max = tab[i];
		}
		i ++;
	}
	return (1);
}

// check right parameters
int row_right (int pos , char *tab, char *Input, char max, int count)
{
	int i ;

	i = 15 ;
	while (i >= 0)
	{
		if (i % 4 == 0 && i < 15)
		{
			if ( check(count, Input, pos) == 0)
				return(0);
			count = 0;
			max = tab[i];
			pos += 2;
		}
		else if (max < tab[i])
		{
			count ++;
			max = tab[i];
		}
		i --;
	}
	return (1);
}

// check up parameters
int col_up(int pos , char *tab, char *Input, char max, int count)
{
	int i ;
	int rep;

	rep = 0;
	i = 0 ;
	while (rep < 4)
	{
		if (i % 4 == 0 && i < 15)
		{
			if ( check(count, Input, pos) == 0)
				return(0);
			count = 0;
			max = tab[i];
			pos += 2;
		}
		else if (max < tab[i])
		{
			count ++;
			max = tab[i];
		}
		if (i > 11)
		{
			i -= 11 ;
			rep ++;
		}
		i += 4;
	}
	return (1);
}

// check down parameters
int col_down(int pos , char *tab, char *Input, char max, int count)
{
	int i ;
	int rep;

	rep = 0;
	i = 0 ;
	while (rep < 4)
	{
		if (i % 4 == 0 && i < 15)
		{
			if ( check(count, Input, pos) == 0)
				return(0);
			count = 0;
			max = tab[i];
			pos += 2;
		}
		else if (max < tab[i])
		{
			count ++;
			max = tab[i];
		}
		if (i < 4)
		{
			i -= 11 ;
			rep ++;
		}
		i += 4;
	}
	return (1);
}
