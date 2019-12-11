/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltakahas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/03 11:16:07 by ltakahas          #+#    #+#             */
/*   Updated: 2019/12/05 09:57:47 by ltakahas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2);

int	main(void)
{
	char str1[] = "Abacaxi\200";
	char str2[] = "Abacaxi";

	printf("str1: %s\n", str1);
	printf("str2: %s\n", str2);
	ft_strcmp(str1, str2);
	printf("ft_strcmp return: %d\n", ft_strcmp(str1, str2));
	strcmp(str1, str2);
	printf("strcmp return: %d\n", strcmp(str1, str2));
	return (0);
}
