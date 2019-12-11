/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrferr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/01 16:03:24 by gabrferr          #+#    #+#             */
/*   Updated: 2019/12/05 21:42:51 by gabrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

int		main() {
	int x = 0;
	int *px = &x;
	int **ppx = &px;
	int ***pppx = &ppx;
	int ****ppppx = &pppx;
	int *****pppppx = &ppppx;
	int ******ppppppx = &pppppx;
	int *******pppppppx = &ppppppx;
	int ********ppppppppx = &pppppppx;
	int *********pppppppppx = &ppppppppx;

    ft_ultimate_ft(pppppppppx);
	printf("%d\n", x);

    return 0;
}
