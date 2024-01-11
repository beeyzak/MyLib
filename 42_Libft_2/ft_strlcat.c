/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 03:40:16 by marvin            #+#    #+#             */
/*   Updated: 2024/01/11 03:40:16 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	len_d;
	size_t	len_s;

	i = 0;
	j = 0;
	while (dest[j] != '\0')
	{
		j++;
	}
	len_d = j;
	len_s = ft_strlen(src);
	if (dstsize <= len_d)
		return (len_s + dstsize);
	while (src[i] != '\0' && i < (dstsize - len_d - 1))
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (len_d + len_s);
}