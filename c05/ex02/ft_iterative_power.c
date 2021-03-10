/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcoach <gcoach@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 02:19:16 by gcoach            #+#    #+#             */
/*   Updated: 2021/03/10 11:18:48 by gcoach           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int i;
	int count;

	if (power < 0)
		return (0);
	count = 1;
	i = 0;
	while (i < power)
	{
		count = count * nb;
		i++;
	}
	return (count);
}


int main()
{
  printf("%d",ft_iterative_power(10, 3));
  return(0);
}