#include "libft.h"

void *ft_memset(void *s, int c, size_t n)
{
    unsigned char *ptr;
    unsigned char value;

    if (n > 0) 
    {
        ptr = (unsigned char *)s;
        value = (unsigned char)c;
        *ptr = value;
        
        size_t i = 1;
        while (i < n)
        {
            ptr[i] = value;
            i++;
        }
    }
    
    return s;
}
