/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bakdogan <bakdogan@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 16:57:52 by bakdogan          #+#    #+#             */
/*   Updated: 2023/12/09 17:38:19 by bakdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	/*
	if (dst == NULL && src == NULL)
	return (0);
	*/
	while (i < n)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dst);
}
/*
int	main(void)
{
	const char *cp = "BilgisayarKavramlari"
	char dest[40];
	int i = 0;
	while(i<40)
	{
		dest[i] = 'a';
		i++;
	}
	ft_memcpy(dest,cp,20);
	printf("%s", dest);
}
*/
