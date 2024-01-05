/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bakdogan <bakdogan@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 16:57:27 by bakdogan          #+#    #+#             */
/*   Updated: 2024/01/05 14:47:31 by bakdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

void	*ft_bzero(void *b, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		((unsigned char *)b)[i] = '0';
		i++;
	}
	return (b);
}

/*
int main(void)
{
	char *ptr = malloc(sizeof(char)*5);
	ft_bzero(ptr, 4);
	printf("%s", ptr);
}
*/