#include "libft.h"

int	l_tolower(int x)
{
	if (x >= 'A' && x <= 'Z')
		return (x + 32);
	return (x);
}
