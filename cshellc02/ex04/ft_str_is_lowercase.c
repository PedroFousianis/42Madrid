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

#include <stdio.h>
int	ft_str_is_numeric(char *str)
{
	int		val;

	val = 1;
	while (*str != '\0')
	{
		if (*str < 97 || *str > 122)
		{
			val = 0;
			break ;
		}
		str++;
	}
	return (val);
}

/*int main()
{
	char *str;

	str = "abcdefghijklmnopqrstuvwxyz";

	printf("%d\n", ft_str_is_numeric(str));
}*/