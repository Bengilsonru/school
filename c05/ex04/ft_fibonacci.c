/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcoach <gcoach@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 11:49:51 by gcoach            #+#    #+#             */
/*   Updated: 2021/03/10 15:49:19 by gcoach           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int     ft_fibonacci(int index)
{
    if (index == 0)
        return 0; // базовый случай (условие завершения)
    if (index == 1)
        return 1;
    if (index < 0)
        return -1; 
    return ft_fibonacci(index-1) + ft_fibonacci(index-2);
}

int main(){
    int s = -2;
    printf("%d",(ft_fibonacci(s)));
}