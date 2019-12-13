/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrferr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/11 21:53:09 by gabrferr          #+#    #+#             */
/*   Updated: 2019/12/13 00:52:49 by gabrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i = i + 1;
	}
	return (1);
}

int		ft_find_next_prime(int nb)
{
	int i;

	i = 2;
	while (1)
	{
		if (ft_is_prime(nb))
			return (nb);
		nb = nb + 1;
	}
}
