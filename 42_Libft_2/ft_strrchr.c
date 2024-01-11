/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 03:40:40 by marvin            #+#    #+#             */
/*   Updated: 2024/01/11 06:54:27 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char *ft_strrchr(const char *s, int c)
{
    int	i;

	i = ft_strlen(s);
    while(i >= 0)
    {
        if (s[i] == (char)c)
			return ((char *)(s + i));
		i--;
    }
	return (NULL);
}
/*int main() {
    const char *str = "Bdeyza akddn";
    char aranan = '\0';

    char *sonuc = ft_strrchr(str, aranan);

    if (sonuc != NULL) {
        printf("Karakter bulundu: %c\n", *sonuc);
        printf("Karakterin indeksi: %ld\n", sonuc - str);
    } else {
        printf("Karakter bulunamadi\n");
    }

    return 0;
}*/
