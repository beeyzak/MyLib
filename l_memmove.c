#include "libft.h"

void	*l_memmove(void *s1, const void *s2, size_t n)
{
	size_t	len;

	len = 0;
	if (!s1 && !s2)
		return (0);
	if (s2 < s1)
	{
		len = n;
		while (len > 0)
		{
			len--;
			((char *)s1)[len] = ((char *)s2)[len];
		}
	}
	else
	{
		len = 0;
		while (len < n)
		{
			((char *)s1)[len] = ((char *)s2)[len];
			len++;
		}
	}
	return (s1);
}
