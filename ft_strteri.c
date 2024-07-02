#include "libft.h"

void ft_striteri(char *s, void (*f)(unsigned int, char*)) 
{
    unsigned int    indx;

    if (s == NULL || f == NULL) 
    {
        return;
    }

    indx = 0;
    while(*s)
    {
        f(indx, s);
        s++;
        indx++;
    }
    
    
}