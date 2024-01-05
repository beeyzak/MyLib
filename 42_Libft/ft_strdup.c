/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bakdogan <bakdogan@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 15:18:22 by bakdogan          #+#    #+#             */
/*   Updated: 2024/01/05 15:18:22 by bakdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strdup(const char *str)
{
	char *str2;
	size_t len;

	len = ft_strlen(str);
	str2 = (char *)malloc(len + 1);
	if ((str2) == NULL)
		return (NULL);
	len = 0;
	while (str[len] != '\0')
	{
		str2[len] = str[len];
		len++;
	}
	str2[len] = '\0';
}

/*int main(void)
{
	const char *cp1 = "Bilgisayar";
	char *cp2 = strdup(cp1);

	printf("İlk karakter dizisi: %s\n", cp1);
	printf("Benzer olarak oluşturulan karakter dizisi: %s", cp2);

	return (0);
}*/