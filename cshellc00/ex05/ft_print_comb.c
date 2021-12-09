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
void	ft_print_comb(void);
void	condicion(int i, int j, int k);

void	ft_print_comb(void)
{
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	k = 0;
	while (i < 10)
	{
		while (j < 10)
		{
			while (k < 10)
			{
				if (i < j && j < k)
				{
					condicion(i, j, k);
				}
				k++;
			}
			k = 0;
			j++;
		}
		j = 0;
		i++;
	}
}

void	condicion(int i, int j, int k)
{
	char	a;
	char	b;
	char	c;

	a = 48 + i;
	b = 48 + j;
	c = 48 + k;
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	if (i != 9 || j != 9 || k != 9)
	{
		write(1, ",", 1);
		write(1, " ", 1);
	}
}
