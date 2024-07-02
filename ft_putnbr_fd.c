#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{

    if( n < 0)
    {
        write(fd, "-", 1);
        n = -n;
    }

    if (n >= 10)
    {
        ft_putnbr_fd(n / 10, fd);
    }

    char digit = n % 10 + '0';
    write(fd, &digit, 1);
}