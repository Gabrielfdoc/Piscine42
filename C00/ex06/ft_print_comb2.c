/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrferr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/28 17:12:30 by gabrferr          #+#    #+#             */
/*   Updated: 2019/12/03 22:05:21 by gabrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	char primeiro;
	char segundo;

	primeiro = 0;
	segundo = 0;
	while (primeiro <= 99)
	{
		segundo = primeiro + 1;
		while (segundo <= 99)
		{
			ft_putchar(primeiro / 10 + '0');
			ft_putchar(primeiro % 10 + '0');
			ft_putchar(' ');
			ft_putchar(segundo / 10 + '0');
			ft_putchar(segundo % 10 + '0');
			if ((primeiro / 10 != 9) || (primeiro % 10 != 8))
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			segundo = segundo + 1;
		}
		primeiro = primeiro + 1;
	}
}

int		main()
{
	ft_print_comb2();
	return 0;
}
