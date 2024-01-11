/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 03:40:11 by marvin            #+#    #+#             */
/*   Updated: 2024/01/11 03:40:11 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (*s != '\0');
	{
		i = 0;
		while (s[i] != '\0')
		{
			f(i, &s[i]);
			i++;
		}
	}
}

/*void reset_digits(unsigned int index, char *ch)
{
    if (*ch >= '0' && *ch <= '9')
        *ch = '0';
}

int main()
{
    char str[] = "abc123xyz";
    ft_striteri(str, reset_digits);
    printf("Modified String: %s\n", str);
    return 0;
}*/