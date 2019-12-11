/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltakahas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 16:08:25 by ltakahas          #+#    #+#             */
/*   Updated: 2019/12/10 19:05:27 by gabrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int		main(void)
{
	char	str1[] = "voltar para casa.";
	char	str2[80] = "Quero muito ";
	int		n;

	n = 19;
	printf("src: %s\n", str1);
	printf("dest: %s\n", str2);
	printf("n = %d\n", n);
	ft_strncat(str2, str1, n);
	printf("ft_strncat: %s\n", str2);
//	strncat(str2, str1, n);
//	printf("strncat: %s\n", str2);
	return (0);
}
