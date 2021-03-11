/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcoach <gcoach@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 15:58:02 by gcoach            #+#    #+#             */
/*   Updated: 2021/03/11 16:22:14 by gcoach           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void		ft_putstr(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
}

int main(int argc, char *argv[])
{
    int i;

    i = 1;
    while (i != argc)
    {
    ft_putstr(argv[i]);
    i++;
    ft_putchar('\n');
    }
    return (0);
}