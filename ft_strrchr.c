#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    const char *last = NULL;

    if (s != NULL)
    {
        while (*s)
        {
            if (*s == (char)c)
            {
                last = s;
            }
            s++;
        }
        if ((char)c == '\0')
        {
            return (char *)s;  // Zwraca wskaźnik na koniec łańcucha
        }
    }

    return (char *)last;
}

/*
#include <stdio.h>
int main()
{
    int ch = '\0';
    const char* str = "Hello barbara";
    char *result = ft_strrchr(str, ch);
    printf("%ld", result - str);
    return (0);
}*/
