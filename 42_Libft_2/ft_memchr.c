/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 03:39:38 by marvin            #+#    #+#             */
/*   Updated: 2024/01/11 06:54:27 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
	size_t i;

	i = 0;
	while (i < n)
	{
		if (*((unsigned char *)s + i) == (unsigned char)c)
			return ((unsigned char *)s + i);
		i++;
	}
	return (NULL);
}

/*int main() {
    const char *str = "Merhaba Dunya";
    int aranan = 'a';

    void *sonuc = ft_memchr(str, aranan, 13);

    if (sonuc != NULL) {
        printf("Karakter bulundu: %c\n", *(char *)sonuc);
        printf("Karakterin adresi: %p\n", sonuc);
    } else {
        printf("Karakter bulunamadi\n");
    }

    return 0;
}*/
