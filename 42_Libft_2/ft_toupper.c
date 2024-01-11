/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 03:40:51 by marvin            #+#    #+#             */
/*   Updated: 2024/01/11 06:54:27 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_toupper(int x)
{
    if(x >= 'a' && x <= 'z')
        return (x - 32);
    return (x);
}

int main()
{
    printf("%c", ft_toupper('B'));
}
