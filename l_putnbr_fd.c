#include "libft.h"

void	l_putnbr_fd(int n, int fd)
{
	long	nb;

	nb = n;
	if (nb < 0)
	{
		l_putchar_fd('-', fd);
		nb = (nb * -1);
	}
	if (nb < 10)
		l_putchar_fd(nb + '0', fd);
	if (nb > 9)
	{
		l_putnbr_fd(nb / 10, fd);
		l_putnbr_fd(nb % 10, fd);
	}
}
