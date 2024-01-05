/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bakdogan <bakdogan@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 14:52:56 by bakdogan          #+#    #+#             */
/*   Updated: 2024/01/05 14:52:56 by bakdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*memmove(void *dest, const void *src, size_t n)
{
	char *d = dest;
	const char *s = src;
	if (d < s)
	{
		while (n--)
			*d++ = *s++;
	}
	else
	{
		char *lasts = s + (n - 1);
		char *lastd = d + (n - 1);

		while (n--)
			*lastd-- = *lasts--;
	}

	return (dest);
}