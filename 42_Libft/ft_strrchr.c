/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char *ft_strrchr(const char *s, int c)
{
    int	i;

	i = ft_strlen(s);
    while(i >= 0)
    {
        if (s[i] == (char)c)
			return ((char *)(s + i));
		i--;
    }
	return (NULL);
}
/*int main() {
    const char *str = "Bdeyza akddn";
    char aranan = '\0';

    char *sonuc = ft_strrchr(str, aranan);

    if (sonuc != NULL) {
        printf("Karakter bulundu: %c\n", *sonuc);
        printf("Karakterin indeksi: %ld\n", sonuc - str);
    } else {
        printf("Karakter bulunamadi\n");
    }

    return 0;
}*/
