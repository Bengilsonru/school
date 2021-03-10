/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcoach <gcoach@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 01:45:21 by gcoach            #+#    #+#             */
/*   Updated: 2021/03/10 03:06:54 by gcoach           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

int	ft_recursive_factorial(int nb)
 {
 	if (nb < 0 || nb > 12)
 		return (0);
 	if (nb <= 1)
 		return (1);
 	return (nb * ft_recursive_factorial(nb - 1));
 }

int main(void){
    int z = 10;
    printf("%d",ft_recursive_factorial(z));
    return(0);
}