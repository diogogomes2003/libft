/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dduarte- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 09:29:47 by dduarte-          #+#    #+#             */
/*   Updated: 2023/04/14 08:40:14 by dduarte-         ###   ########.fr       */
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
int 	ft_isprint(int arg);
size_t	ft_strlen(const	char	*s);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
//char	*ft_strnstr(const char *str, const char *to_find, size_t len);
int	ft_strncmp(const char *s1, const char *s2, size_t n);
void	ft_memset(void *str, int c, size_t len);
void	ft_bzero(void *str, size_t len);
int	ft_toupper(int n);
int	ft_tolower(int n);

//(memcpy, memmove, memchr, memcmp,atoi)
#endif 
