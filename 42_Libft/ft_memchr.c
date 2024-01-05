/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bakdogan <bakdogan@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 14:47:47 by bakdogan          #+#    #+#             */
/*   Updated: 2024/01/05 14:52:24 by bakdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*((unsigned char *)s + i) == (unsigned char)c)
			return ((unsigned char *)s + i);
		i++;
	}
	return (NULL);
}

int	main(void)
{
	const char	*str = "Merhaba Dunya";
	int			aranan;
	void		*sonuc;

	aranan = 'a';
	sonuc = ft_memchr(str, aranan, 13);
	if (sonuc != NULL)
	{
		printf("Karakter bulundu: %c\n", *(char *)sonuc);
		printf("Karakterin adresi: %p\n", sonuc);
	}
	else
	{
		printf("Karakter bulunamadi\n");
	}
	return (0);
}
