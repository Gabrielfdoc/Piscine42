/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_interactive_factorial.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrferr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/11 15:04:48 by gabrferr          #+#    #+#             */
/*   Updated: 2019/12/11 23:42:08 by gabrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int fat;

	if (nb >= 0)
	{
		fat = 1;
		while (nb > 0)
		{
			fat = fat * nb;
			nb = nb - 1;
		}
		return (fat);
	}
	else
		return (0);
}
