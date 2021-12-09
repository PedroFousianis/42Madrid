/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthcar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfousian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 12:29:04 by pfousian          #+#    #+#             */
/*   Updated: 2021/12/07 12:29:13 by pfousian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_print_comb2(void);
void	condicion(int i, int j, int k, int l);
void	bucle(int i, int j, int k, int l);

void	ft_print_comb2(void)
{
	int		i;
	int		j;
	int		k;
	int		l;

	i = 0;
	j = 0;
	k = 0;
	l = 0;
	while (i < 10)
	{
		while (j < 10)
		{
			while (k < 10)
			{
				bucle(i, j, k, l);
				k++;
			}
			k = 0;
			j++;
		}
		j = 0;
		i++;
	}
}

void	bucle(int i, int j, int k, int l)
{
	while (l < 10)
	{
		if (i != k || i != l || j != k || j != l)
		{
			condicion(i, j, k, l);
		}
		l++;
	}
	l = 0;
}

void	condicion(int i, int j, int k, int l)
{
	char	a;
	char	b;
	char	c;
	char	d;

	a = 48 + i;
	b = 48 + j;
	c = 48 + k;
	d = 48 + l;
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, " ", 1);
	write(1, &c, 1);
	write(1, &d, 1);
	if (i != 9 || j != 9 || k != 9 || l != 8)
	{
		write(1, ",", 1);
		write(1, " ", 1);
	}
}
