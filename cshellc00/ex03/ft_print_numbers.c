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

void	ft_print_numbers(void);

void	ft_print_numbers(void)
{
	int		i;
	char	a;

	a = 48;
	i = 0;
	while (i <= 9)
	{
		write(1, &a, 1);
		i++;
		a++;
	}	
}
