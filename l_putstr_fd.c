#include "libft.h"

void	l_putstr_fd(char const *s, int fd)
{
	if (*s != '\0')
		write(fd, s, l_strlen(s));
}
