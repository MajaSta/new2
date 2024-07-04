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

int ft_isprint(int c)
{
    if (c >= 32 && c <= 126)
        return 1;
    return 0;
}
/*
int main(void)
{
   char c[] = {'a', '\n', '1'};
   int size = sizeof(c)/sizeof(c[0]);

   for (int i = 0; i < size; i++)
   {
        int result = ft_isprint (c[i]);
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
