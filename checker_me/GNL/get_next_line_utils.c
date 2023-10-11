/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majrou <majrou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 01:45:08 by majrou            #+#    #+#             */
/*   Updated: 2023/05/15 20:02:52 by majrou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;

	if (!s)
		return (NULL);
	str = (char *)malloc(len +1);
	if (!str)
		return (NULL);
	i = 0;
	while (i < len && start < ft_strlen (s))
	{
		str[i] = s[start];
		start++;
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	*ft_strchr(const char *str, int c)
{
	char	cast_c;
	char	*cast_str;
	int		i;

	i = 0;
	cast_str = (char *)str;
	cast_c = (unsigned char)c;
	while (cast_str[i] && cast_str[i] != cast_c)
		i++;
	if (cast_str[i] == cast_c)
		return (&cast_str[i]);
	return (0);
}
