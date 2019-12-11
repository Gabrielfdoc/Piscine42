/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrferr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 00:51:41 by gabrferr          #+#    #+#             */
/*   Updated: 2019/12/03 01:49:50 by gabrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int i;
	int aux;
	int j;

	i = 0;
	j = size;
	while (i < size)
	{
		aux = tab[i];
		tab[i] = tab[j - 1];
		tab[j - 1] = aux;
		i = i + 1;
		j = j - 1;
		size = size - 1;
	}
}
