/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrferr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 09:19:05 by gabrferr          #+#    #+#             */
/*   Updated: 2019/12/05 14:31:03 by gabrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int len;

	len = 0;
	while (src[len] != '\0')
		len = len + 1;
	i = 0;
	while (size && src[i] != '\0' && (i < (size - 1)))
	{
		dest[i] = src[i];
		i = i + 1;
	}
	dest[i] = '\0';
	return (len);
}
