/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    int i;
    
    i = 1;
    while(i <= n && *s1 && *s2)
    {
        if((unsigned char)*s1 - (unsigned char)*s2 == 0)
        {
            s1++;
            s2++;
            i++;
        }
        else
            return ((unsigned char)*s1 - (unsigned char)*s2);
    }
    return (0);
}

/*int main()
{
    char *s1 = "eerhbba";
    char *s2 = "aerhaba";
    printf("%d", ft_strncmp(s1,s2,4));

    return 0;
}*/
