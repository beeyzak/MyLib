#include "libft.h"

int	l_isascii(int x)
{
	if (x >= 0 && x <= 127)
		return (1);
	return (0);
}
