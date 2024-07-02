#include "libft.h"

void *ft_memset(void *s, int c, size_t n)
{
    size_t i;

    unsigned char *ptr = (unsigned char *)s;
    for (i = 0; i < n; i++)
    {
        ptr[i] = (unsigned char)c;
    }
    return s;
}