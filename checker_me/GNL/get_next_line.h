/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majrou <majrou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 19:58:56 by majrou            #+#    #+#             */
/*   Updated: 2023/05/15 19:59:51 by majrou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif

# include<string.h>
# include<unistd.h>
# include<stdlib.h>
# include <fcntl.h>

char			*get_next_line(int fd);
char			*ft_substr(char const *s, unsigned int start, size_t len);
char			*ft_strjoin(char const *s1, char const *s2);
size_t			ft_strlen(const char *str);
void			*ft_memcpy(void *dest, const void *src, size_t n);
char			*ft_strdup(const char *str);
char			*my_read(int fd, char *str);
char			*ft_strchr(const char *str, int c);
char			*ft_line(char *str);

#endif
