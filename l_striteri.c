#include "libft.h"

void	l_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (*s != '\0')
	{
		i = 0;
		while (s[i] != '\0')
		{
			f(i, &s[i]);
			i++;
		}
	}
}
