#include "libft.h"

int    ft_isdigit (char c)
{
    if  (c >= '0' && c <= '9')
    {
       return 1;
    }
    else
    {
        return 0;
    }
}
/*
int main(void)
{
   char c[] = {'a', 'b', '1'};
   int size = sizeof(c)/sizeof(c[0]);

   for (int i = 0; i < size; i++)
   {
        int result = ft_isdigit (c[i]);
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