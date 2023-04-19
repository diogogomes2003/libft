/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dduarte- <dduarte-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 09:00:07 by dduarte-          #+#    #+#             */
/*   Updated: 2023/04/19 10:35:41 by dduarte-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char	const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	unsigned int	j;
	char			*dest;

	i = start;
	j = 0;
	dest = (char *)malloc(sizeof(char) * (len + 1));
	if (dest == NULL)
		return (NULL);
	while (j < len && (*(s + i)) != '\0')
	{
		*dest = *(s + i);
		dest++;
		i++;
		j++;
	}
	*dest = '\0';
	return (dest - len);
}
