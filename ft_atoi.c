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

int ft_atoi(const char *str)
{
    int i = 0;
    int sign = 1;
    int result = 0;

    if (!str)
    {
        return 0;
    }
    
    while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
    {
        i++;
    }

    if (str[i] == '-' || str[i] == '+') 
    {
        if (str[i] == '-')
        {
            sign = -1;
        }
        i++;
    }

    while (str[i] >= '0' && str[i] <= '9') 
    {
        result = result * 10 + (str[i] - '0');
        i++;
    }

    return result * sign;
}
/*
#include <stdio.h>
int main()
{
    const char *s = "34567";
    printf("Input: '%s' => Output: %d\n", s, ft_atoi(s));
    return 0;
}*/
