/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrferr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/06 17:59:46 by gabrferr          #+#    #+#             */
/*   Updated: 2019/12/10 17:33:23 by gabrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int		len;
	int		src_len;

	len = 0;
	while (dest[len] != '\0')
		len++;
	src_len = 0;
	while (src[src_len] != '\0')
	{
		dest[len + src_len] = src[src_len];
		src_len++;
	}
	dest[len + src_len] = '\0';
	return (dest);
}
