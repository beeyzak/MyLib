/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bakdogan <bakdogan@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 14:48:56 by bakdogan          #+#    #+#             */
/*   Updated: 2024/01/05 15:18:33 by bakdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	i;

	i = 1;
	while (i <= n && *s1 && *s2)
	{
		if ((unsigned char)*s1 - (unsigned char)*s2 == 0)
		{
			s1++;
			s2++;
			i++;
		}
		else
			return ((unsigned char)*s1 - (unsigned char)*s2);
	}
	return (0);
}

/*int main()
{
	char *s1 = "eerhbba";
	char *s2 = "aerhaba";
	printf("%d", ft_strncmp(s1,s2,4));

	return (0);
}*/
