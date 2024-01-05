
#include <stdio.h>

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
