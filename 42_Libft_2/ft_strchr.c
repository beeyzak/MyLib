/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 03:40:06 by marvin            #+#    #+#             */
/*   Updated: 2024/01/11 06:54:27 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *s, int c)
{
    int i;
    
    i = 0;
    while(*s != '\0')
    {
        if(*s == c)
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

    return 0;
}*/
