#include "libft.h"

int ft_isalnum (char c)
{
    if((c >= 48 && c <= 57) || (c >= 64 && c <= 90) || (c >= 97 && c <= 122))
    {
       return (1);
    }
    else
    {
        return (0);
    }
}
/*
int main()
{
    char test_chars[] = { 'A', 'z', '0', '9', '!', ' ', '\n' };
    int num_tests = sizeof(test_chars) / sizeof(test_chars[0]);

    for (int i = 0; i < num_tests; i++)
     {
        int result = ft_isalnum(test_chars[i]);
        if (result) 
        {
            printf("Character '%c' (ASCII %d) is alphanumeric.\n", test_chars[i], test_chars[i]);
        } 
        else 
        {
            printf("Character '%c' (ASCII %d) is not alphanumeric.\n", test_chars[i], test_chars[i]);
        }
    }
    return 0;
}*/