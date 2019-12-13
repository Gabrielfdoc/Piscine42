/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_fatorial.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrferr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/12 23:17:57 by gabrferr          #+#    #+#             */
/*   Updated: 2019/12/12 23:18:04 by gabrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_fatorial(int nb)
{
	if (nb == 0 || nb == 1)
	{
		return (1);
	}
	else if (nb < 0 || nb >= 13)
	{
		return (0);
	}
	else
	{
		nb = nb * ft_recursive_fatorial(nb - 1);
		return (nb);
	}
}
