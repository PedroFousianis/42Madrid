/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfousian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 13:14:09 by pfousian          #+#    #+#             */
/*   Updated: 2021/12/07 13:14:13 by pfousian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size);

void	ft_rev_int_tab(int *tab, int size)
{
	int		i;
	int		j;
	int		aux[size];

	j = 0;
	i = size - 1;
	while (i >= 0)
	{
		aux[j] = tab[i];
		i--;
		j++;
	}
	j = 0;
	while (j < size)
	{
		tab[j] = aux [j];
		j++;
	}
}
