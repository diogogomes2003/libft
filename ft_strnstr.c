/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dduarte- <dduarte-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 10:58:01 by dduarte-          #+#    #+#             */
/*   Updated: 2023/04/17 10:23:28 by dduarte-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stdio.h>
#include <string.h>

char	*ft_strnstr(const char *s, const char *find, size_t slen)
{
	char	c;
	char	sc;
	size_t	len;

	c = *find++;
	sc = *s++;
	if (c != '\0')
	{
		len = strlen(find);
		while (strncmp(s, find, len) != 0)
		{
			while (sc != c)
			{
				if (slen-- < 1 || sc == '\0')
					return (NULL);
			}
			if (len > slen)
				return (NULL);
		}
		s--;
	}
	return ((char *)s);
}
int main()
{
	const char str1[] = "cinco";
	const char find[] = "nc";
	size_t n = 5;
	char *ptr;
	ptr = ft_strnstr(str1,find,n);

	printf("ft_strnstr : %s\n",ptr);
}