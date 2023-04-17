/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dduarte- <dduarte-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 15:04:39 by dduarte-          #+#    #+#             */
/*   Updated: 2023/04/17 15:43:52 by dduarte-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	size_t	i;

	ptr = (char *)malloc (count * size);
	if (ptr == NULL)
		return (ptr);
	i = 0;
	while (i < count * size)
	{
		*(char *)(ptr + i) = 0;
		i++;
	}
	return (ptr);
}
