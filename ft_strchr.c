#include "libft.h"

char    *ft_strchr(const char *s, int c)
{
    if (!s)
    {
        return NULL;
    }

    while(*s)
    {
        if (*s == (char)c)
        {
            return ((char*)s);
        }
         s++;
    }
    if (*s == (char)c)
    {
        return ((char*)s);
    }
    return (NULL);
}

/*
#include <stdio.h>
int main()
{
    int word = 'o';
    const char* words = "Hello barbara";
    char *result = ft_strchr(words, word);
    printf("%s", result);
    return (0);
}*/