#ifndef LIBFT_H
# define LIBFT_H

//# include <unistd.h>
# include <stdlib.h>

# include <stdio.h>
# include <fcntl.h>
# include <string.h>

int	ft_isalnum(int x);
size_t ft_strlen(const char *str);
int	ft_isprint(int c);
int	ft_isdigit(int x);
int	ft_isascii(int x);
int	ft_isalpha(int x);
int	ft_isalnum(int x);
void	*ft_memcpy(void *dst, const void *src, size_t n)
#endif