/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrferr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/03 00:39:29 by gabrferr          #+#    #+#             */
/*   Updated: 2019/12/05 14:31:58 by gabrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		no_alpha(char c)
{
	if (c < '0' || (c > '9' && c < 'A') || (c > 'Z' && c < 'a') || c > 'z')
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int i;
	int char_ant;

	i = 0;
	char_ant = '/';
	while (str[i] != '\0')
	{
		if (no_alpha(char_ant) && (str[i] >= 'a' && str[i] <= 'z'))
			str[i] += 'A' - 'a';
		else if (!no_alpha(char_ant) && (str[i] >= 'A' && str[i] <= 'Z'))
			str[i] += 'a' - 'A';
		char_ant = str[i];
		i = i + 1;
	}
	return (str);
}
