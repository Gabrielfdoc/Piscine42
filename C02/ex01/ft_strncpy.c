/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrferr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/02 22:49:17 by gabrferr          #+#    #+#             */
/*   Updated: 2019/12/05 14:20:29 by gabrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;
	int				src_ended;

	i = 0;
	src_ended = 0;
	while (i < n)
	{
		if (src[i] == '\0')
			src_ended = 1;
		dest[i] = (src_ended ? '\0' : src[i]);
		i = i + 1;
	}
	return (dest);
}
