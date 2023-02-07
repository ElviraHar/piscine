/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elharuty <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 21:31:30 by elharuty          #+#    #+#             */
/*   Updated: 2022/10/05 17:51:13 by elharuty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> 

void	ft_putchar(char a)
{
	write (1, &a, 1);
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	while (i <= 98)
	{
		j = i + 1;
		while (j <= 99)
		{
			ft_putchar (i / 10 + 48);
			ft_putchar (i % 10 + 48);
			ft_putchar (' ');
			ft_putchar (j / 10 + 48);
			ft_putchar (j % 10 + 48);
			if (i != 98)
			{
				ft_putchar (',');
				ft_putchar (' ');
			}
			j++;
		}
		i++;
	}
}
