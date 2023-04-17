/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dduarte- <dduarte-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 09:29:47 by dduarte-          #+#    #+#             */
/*   Updated: 2023/04/17 12:09:09 by dduarte-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>


#ifndef LIBFT_H
# define LIBFT_H

int	ft_isalpha(int arg);
int	ft_isdigit(int arg);
int	ft_isalnum(int arg);
int	ft_isascii(int arg);
int	ft_isprint(int arg);
int	ft_strncmp(const char *s1, const char *s2, size_t n);
int	ft_toupper(int n);
int	ft_tolower(int n);
int	ft_atoi(const char	*ptr);
int	ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memset(void *str, int c, size_t len);
void	*ft_memcpy(void	*dest,	const void	*src, size_t	n);
void	ft_bzero(void *str, size_t len);
size_t	ft_strlen(const	char	*s);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
char	*ft_strnstr(const char *s, const char *find, size_t slen);

//(memmove, memchr)
#endif 
