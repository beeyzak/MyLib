#include "libft.h"

size_t	l_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	len_d;
	size_t	len_s;

	i = 0;
	j = 0;
	while (dst[j] != '\0')
	{
		j++;
	}
	len_d = j;
	len_s = l_strlen(src);
	if (dstsize <= len_d)
		return (len_s + dstsize);
	while (src[i] != '\0' && i < (dstsize - len_d - 1))
	{
		dst[j] = src[i];
		i++;
		j++;
	}
	dst[j] = '\0';
	return (len_d + len_s);
}
