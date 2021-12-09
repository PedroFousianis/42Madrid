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

#include  <unistd.h>
void	ft_strlen(char *str);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_strlen(char *str)
{
	int		i;
	char	c;

	i = 0;
	while (*str != '\0')
	{
		str++;
		i++;
	}
	c = 48 + i;
	ft_putchar(c);
}
