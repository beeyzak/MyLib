#include "libft.h"

void	*l_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = malloc(count * size);
	if (ptr == NULL)
		return (NULL);
	else
		ft_bzero(ptr, count * size);
	return (ptr);
}
