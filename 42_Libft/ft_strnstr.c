/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bakdogan <bakdogan@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 15:18:41 by bakdogan          #+#    #+#             */
/*   Updated: 2024/01/05 15:18:41 by bakdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


// Tekrar bak

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t needle_len;

	needle_len = ft_strlen(needle);
	if (*needle == 0)
		return ((char *)haystack);
	while (*haystack && needle_len <= len)
	{
		if (*haystack == *needle && ft_strncmp(haystack, needle,
				needle_len) == 0)
			return ((char *)haystack);
		haystack++;
		len--;
	}
	return (NULL);
}