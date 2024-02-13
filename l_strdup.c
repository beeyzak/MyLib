#include "libft.h"

char	*l_strdup(const char *str)
{
	size_t	len;
	char	*str2;

	len = l_strlen(str);
	str2 = (char *)malloc(len + 1);
	if (!str2)
	{
		return (0);
	}
	len = 0;
	while (str[len] != '\0')
	{
		str2[len] = str[len];
		len++;
	}
	str2[len] = '\0';
	return (str2);
}
