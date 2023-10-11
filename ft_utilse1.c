/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utilse1.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majrou <majrou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 02:08:07 by majrou            #+#    #+#             */
/*   Updated: 2023/05/17 23:01:48 by majrou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

size_t	ft_strlen(const char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;

	if (!s1)
		s1 = ft_strdup("");
	str = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (str == NULL)
		return (NULL);
	if (!s1)
		s1 = ft_strdup("\0");
	ft_memcpy(str, s1, ft_strlen(s1));
	ft_memcpy(str + ft_strlen(s1), s2, ft_strlen(s2));
	str[ft_strlen(s1) + ft_strlen(s2)] = '\0';
	free((char *)s1);
	return (str);
}

char	*ft_strdup(const char *str)
{
	int		i;
	char	*s;

	i = 0;
	s = (char *)malloc ((ft_strlen(str) + 1) * sizeof(char));
	if (!s)
		return (NULL);
	while (str[i] != '\0')
	{
		s[i] = str[i];
		i++;
	}
	s[i] = '\0';
	return (s);
}

int	check_sorte(t_swap stack, char **spt)
{
	if (sorted(&stack))
	{
		free_all(&stack, spt);
		return (0);
	}
	return (1);
}
