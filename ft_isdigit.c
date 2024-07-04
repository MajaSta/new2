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
