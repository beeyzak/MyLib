/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bakdogan <bakdogan@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 13:47:50 by bakdogan          #+#    #+#             */
/*   Updated: 2024/01/11 13:47:50 by bakdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	size_t	len;
	char	*str2;

	len = ft_strlen(str);
	str2 = (char *)malloc(len + 1);
	if (!str2)
	{
		return (0);
	}
	len = 0;
	while (str[len] != '\0')
	{
		str2[len] = str[len];
		len++;
	}
	str2[len] = '\0';
	return (str2);
}
