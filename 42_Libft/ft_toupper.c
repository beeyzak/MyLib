/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bakdogan <bakdogan@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 14:49:12 by bakdogan          #+#    #+#             */
/*   Updated: 2024/01/05 15:18:56 by bakdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_toupper(int x)
{
	if (x >= 'a' && x <= 'z')
		return (x - 32);
	return (x);
}

int	main(void)
{
	printf("%c", ft_toupper('B'));
}
