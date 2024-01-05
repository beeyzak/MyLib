/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bakdogan <bakdogan@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 14:49:09 by bakdogan          #+#    #+#             */
/*   Updated: 2024/01/05 15:18:53 by bakdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_tolower(int x)
{
	if (x >= 'A' && x <= 'Z')
		return (x + 32);
	return (x);
}

int	main(void)
{
	printf("%c", ft_tolower('b'));
}
