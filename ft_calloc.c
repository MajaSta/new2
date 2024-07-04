/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncolomer <ncolomer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 11:17:02 by ncolomer          #+#    #+#             */
/*   Updated: 2019/10/10 00:31:59 by ncolomer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_calloc(size_t count, size_t size)
{
    void    *ptr;
    
    ptr = (void *)malloc(count * size);

    if (!ptr)
    {
        return NULL;
    }

    ft_bzero(ptr, count * size);

    return ptr;
}
/*
#include <stdio.h>
int main() 
{
    int *arr;
    size_t count = 0;
    size_t size = sizeof(int);

    arr = (int *)ft_calloc(count, size);
    if (arr == NULL) 
    {
        printf("Alokacja pamięci nie powiodła się\n");
        return 1;
    }
}*/
