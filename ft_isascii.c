#include "libft.h"

int ft_isascii (int c)
{
    if (c >= 0 && c <= 127)
    {
        return (1);
    }
    else
    {
        return (0);
    }
}
/*
#include <stdio.h>
int main ()
{
    char spr[] = {'a', '    '};
    int size = sizeof(spr)/sizeof(spr[0]);

    for (int i = 0; i < size; i++)
    {
        int result = ft_isascii (spr[i]);
        if (result)
        {
            printf("yes\n");
        }
        else
        {
            printf("no\n");
        }
    }
    return 0;
}*/