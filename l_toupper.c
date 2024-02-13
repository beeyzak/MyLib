#include "libft.h"

int	l_toupper(int x)
{
	if (x >= 'a' && x <= 'z')
		return (x - 32);
	return (x);
}
