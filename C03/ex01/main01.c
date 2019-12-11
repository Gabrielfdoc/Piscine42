/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltakahas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/03 13:39:01 by ltakahas          #+#    #+#             */
/*   Updated: 2019/12/05 10:33:15 by ltakahas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(void)
{
	char			str1[] = "abac";
	char			str2[] = "abac\200te";
	unsigned int	n;

	n = 5;
	printf("str1: %s\n", str1);
	printf("str2: %s\n", str2);
	printf("n = %d\n", n);
	ft_strncmp(str1, str2, n);
	printf("return ft_strncmp: %d\n", ft_strncmp(str1, str2, n));
	strncmp(str1, str2, n);
	printf("return strncmp: %d\n", strncmp(str1, str2, n));
	return (0);
}