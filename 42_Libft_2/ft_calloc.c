/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 03:39:11 by marvin            #+#    #+#             */
/*   Updated: 2024/01/11 03:39:11 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_calloc(size_t count, size_t size)
{
    void	*ptr;

	ptr = malloc(count * size);
	if (ptr == NULL)
		return (NULL);
	else 
        ft_bzero(ptr, count * size);
	return (ptr);
}


/*int main() {
    // 5 adet int için bellek tahsisi yap
    int *arr = (int *)calloc(5, sizeof(int));

    if (arr != NULL) {
        // Bellek tahsisi başarılıysa, değerleri ekrana yazdır
        for (int i = 0; i < 5; ++i) {
            printf("%d ", arr[i]);
        }

        // Belleği serbest bırak
        free(arr);
    } else {
        printf("Bellek tahsisi hatasi!\n");
    }

    return 0;
}
*/