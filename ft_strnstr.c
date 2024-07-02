#include "libft.h"

char    *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t i;
    size_t j;

    i = 0;
    j = 0;

    if (!haystack || !needle)
    {
        return (NULL);
    }

    if (!needle || !needle[0])
    {
        return ((char*)haystack);
    }

    while (haystack[i] && i < len)
    {
        while (haystack[i + j] && needle[j] && (i + j < len) && (haystack[i + j] == needle[j]))
        {
            j++;
        }

        if (!needle[j])
        {
            return ((char*)(haystack + i));
        }

        i++;
    }

    return (NULL);
}
/*
#include <stdio.h>
int main() {
    const char *haystack = "Hello, world!";
    const char *needle = "o";
    size_t len = 13;

    char *result = ft_strnstr(haystack, needle, len);

    if (result != NULL) {
        printf("'%s' found in '%s' at position: %ld\n", needle, haystack, result - haystack);
    } else {
        printf("'%s' not found in '%s'\n", needle, haystack);
    }

    return 0;
}*/