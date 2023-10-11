/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majrou <majrou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 01:45:04 by majrou            #+#    #+#             */
/*   Updated: 2023/05/15 20:19:09 by majrou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*my_read(int fd, char *save)
{
	char	*ptr;
	int		i;

	ptr = (char *)malloc(sizeof(char) * (BUFFER_SIZE) + 1);
	if (!ptr)
		return (NULL);
	i = 1;
	while (i > 0)
	{
		i = read(fd, ptr, BUFFER_SIZE);
		if (i != -1)
			ptr[i] = '\0';
		if (i == 0)
			break ;
		if (i == -1)
		{
			free(save);
			save = NULL;
			break ;
		}
		save = ft_strjoin(save, ptr);
		if (ft_strchr(ptr, '\n'))
			break ;
	}
	return (free(ptr), save);
}

char	*ft_line(char *save)
{
	int		i;
	char	*line;

	line = NULL;
	i = 0;
	if (!save)
		return (NULL);
	while (save[i] && save[i] != '\n')
		i++;
	line = ft_substr(save, 0, i + 1);
	return (line);
}

char	*sub(char *save)
{
	char	*sub;
	size_t	i;
	size_t	len;

	sub = NULL;
	i = 0;
	len = ft_strlen(save);
	while (save[i] && save[i] != '\n')
		i++;
	if (i < len - 1)
		sub = ft_substr(save, i + 1, len);
	free(save);
	return (sub);
}

char	*get_next_line(int fd)
{
	static char	*str;
	char		*line;

	line = NULL;
	str = my_read(fd, str);
	if (!str)
		return (NULL);
	line = ft_line(str);
	str = sub(str);
	return (line);
}
