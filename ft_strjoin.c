#include <stdlib.h>

char *ft_strjoin(char const *s1, char const *s2) 
{
    size_t i;
    size_t j;
    size_t len1;
    size_t len2;
    char *result;

    len2 = 0;
    len1 = 0;

    if (!s1 || !s2)
    {
        return NULL;
    }

    // Ręczne obliczenie długości s1
    while (s1[len1])
    {
        len1++;
    }

    // Ręczne obliczenie długości s2
    while (s2[len2])
    {
        len2++;
    }

    // Alokacja pamięci dla nowego łańcucha (+1 dla znaku null)
    result = (char *)malloc(len1 + len2 + 1);
    if (!result)
    {
        return NULL;
    }

    // Kopiowanie znaków z s1
    for (i = 0; i < len1; i++) 
    {
        result[i] = s1[i];
    }

    //Kopiowanie znaków z s2
    for (j = 0; j < len2; j++) 
    {
        result[i + j] = s2[j];
    }

    // Dodanie znaku null na końcu
    result[i + j] = '\0';

    return (result);
}