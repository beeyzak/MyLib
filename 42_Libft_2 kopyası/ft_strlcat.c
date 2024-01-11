/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bakdogan <bakdogan@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 12:20:44 by bakdogan          #+#    #+#             */
/*   Updated: 2024/01/11 14:30:45 by bakdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	len_d;
	size_t	len_s;

	i = 0;
	j = 0;
	while (dst[j] != '\0')
	{
		j++;
	}
	len_d = j;
	len_s = ft_strlen(src);
	if (dstsize <= len_d)
		return (len_s + dstsize);
	while (src[i] != '\0' && i < (dstsize - len_d - 1))
	{
		dst[j] = src[i];
		i++;
		j++;
	}
	dst[j] = '\0';
	return (len_d + len_s);
}
