#include "libft.h"

void	l_putendl_fd(char *s, int fd)
{
	l_putstr_fd(s, fd);
	l_putchar_fd('\n', fd);
}
