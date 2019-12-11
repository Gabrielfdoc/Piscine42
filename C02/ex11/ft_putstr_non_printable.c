/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrferr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/05 12:05:14 by gabrferr          #+#    #+#             */
/*   Updated: 2019/12/06 17:58:08 by gabrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_hex(unsigned char c)
{
	unsigned char hex_1;
	unsigned char hex_2;

	hex_1 = ((c / 16) > 9 ? (c / 16) - 10 + 'a' : (c / 16) + '0');
	hex_2 = ((c % 16) > 9 ? (c % 16) - 10 + 'a' : (c % 16) + '0');
	write(1, "\\", 1);
	write(1, &hex_1, 1);
	write(1, &hex_2, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		str[i] < ' ' || str[i] > '~' ? write_hex(str[i]) : write(1, &str[i], 1);
		i++;
	}
}
