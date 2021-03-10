/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcoach <gcoach@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 23:46:14 by gcoach            #+#    #+#             */
/*   Updated: 2021/03/10 03:04:33 by gcoach           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_iterative_factorial(int nb)
{
    unsigned int a;
    int b;

    a = 1;
    b = 1;

    if (nb < 0){
        printf("Error"); // НЕ ЗАБЫТЬ УБРАТТ
        return(0);
    }
    while (nb != 0)
    {
        a *= b;
        nb--;
        b++;
    }
    return(a);


}

int main(){
    int z = 5;
    printf("%d",ft_iterative_factorial(z));
}