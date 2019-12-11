/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrferr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/25 03:14:34 by gabrferr          #+#    #+#             */
/*   Updated: 2019/12/03 22:06:05 by gabrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int unidade, int dezena, int centena)
{
	write(1, &unidade, 1);
	write(1, &dezena, 1);
	write(1, &centena, 1);
	if (unidade + dezena + centena != 168)
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	char unidade;
	char dezena;
	char centena;

	unidade = '0';
	dezena = '1';
	centena = '2';
	while (unidade <= '7')
	{
		while (dezena <= '8')
		{
			while (centena <= '9')
			{
				ft_putchar(unidade, dezena, centena);
				centena = centena + 1;
			}
			dezena = dezena + 1;
			centena = dezena + 1;
		}
		unidade = unidade + 1;
		dezena = unidade + 1;
		centena = dezena + 1;
	}
}
