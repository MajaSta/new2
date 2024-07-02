#include "libft.h"

char *ft_strdup(const char *s1)
{
    char *str;
    size_t i = 0;

    if (!s1)
    {
        return NULL;
    }

    str = malloc(sizeof(*s1) * (ft_strlen(s1) + 1));
    if (!str)
    {
        return NULL;
    }

    while (s1[i])
    {
        str[i] = s1[i];
        i++;
    }

    str[i] = '\0';

    return str;
}