#include "libft.h"

char	*l_strrchr(const char *s, int c)
{
	int	i;

	i = l_strlen(s);
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
		i--;
	}
	return (NULL);
}
