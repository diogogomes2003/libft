/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dduarte- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 10:58:01 by dduarte-          #+#    #+#             */
/*   Updated: 2023/04/13 14:25:28 by dduarte-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdio.h"
#include "string.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	const char	*lg;
	const char	*sm;
	size_t	i;

	if (*to_find == '\0')
		return ((char *)str);
	while (*str != '\0' && len > 0)
	{
		lg = str;
		sm = to_find;
		i = len;
		while (*sm != '\0' && *lg == *sm && i--)
		{
			lg++;
			sm++;
		}
		if (*sm == '\0')
			return ((char *)str);
	}
	return (NULL);
}

int main ()
{
	printf("%s", ft_strnstr("ola amigos","amigos",6));
	return(0);
}
