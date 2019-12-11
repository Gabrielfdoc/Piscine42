/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltakahas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 16:30:35 by ltakahas          #+#    #+#             */
/*   Updated: 2019/12/04 20:22:06 by ltakahas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find);

int		main(void)
{
	char str[] = "abacaximelanciamorango";
	char to_find[] = "";

	printf("str: %s\n", str);
	printf("to find: %s\n", to_find);
	ft_strstr(str, to_find);
	printf("found: %s\n", ft_strstr(str, to_find));
	strstr(str, to_find);
	printf("found: %s\n", strstr(str, to_find));
	return (0);
}