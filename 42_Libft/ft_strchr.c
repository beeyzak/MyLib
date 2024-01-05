/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bakdogan <bakdogan@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 14:48:16 by bakdogan          #+#    #+#             */
/*   Updated: 2024/01/05 15:18:13 by bakdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (*s != '\0')
	{
		if (*s == c)
			return ((char *)s);
		s++;
	}
	if (c == '\0')
		return ((char *)s);
	return (NULL);
}
/*int main() {
	const char *str = "Beyza akdn";
	char aranan = 'n';

	char *sonuc = ft_strchr(str, aranan);

	if (sonuc != NULL) {
		printf("Karakter bulundu: %c\n", *sonuc);
		printf("Karakterin indeksi: %ld\n", sonuc - str);
	} else {
		printf("Karakter bulunamadi\n");
	}

	return (0);
}*/
