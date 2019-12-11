/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltakahas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/03 16:49:04 by ltakahas          #+#    #+#             */
/*   Updated: 2019/12/05 10:34:32 by ltakahas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src);

int		main(void)
{
	char src[] = "umas ferias.";
	char dest[80] = "Quero muito ";

	printf("src: %s\n", src);
	printf("dest: %s\n", dest);
	ft_strcat(dest, src);
	printf("ft_strcat: %s\n", dest);
//	strcat(dest, src);
//	printf("strcat: %s\n", dest);
	return (0);
}