/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

void *ft_memchr(const void *s, int c, size_t n)
{
	size_t i;

	i = 0;
	while (i < n)
	{
		if (*((unsigned char *)s + i) == (unsigned char)c)
			return ((unsigned char *)s + i);
		i++;
	}
	return (NULL);
}

int main() {
    const char *str = "Merhaba Dunya";
    int aranan = 'a';

    void *sonuc = ft_memchr(str, aranan, 13);

    if (sonuc != NULL) {
        printf("Karakter bulundu: %c\n", *(char *)sonuc);
        printf("Karakterin adresi: %p\n", sonuc);
    } else {
        printf("Karakter bulunamadi\n");
    }

    return 0;
}
