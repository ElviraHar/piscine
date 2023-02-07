/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elharuty <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 15:00:27 by elharuty          #+#    #+#             */
/*   Updated: 2022/10/13 18:10:37 by elharuty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	int				i;
	int				j;
	char			*hex;
	unsigned char	current;

	hex = "0123456789abcdef";
	i = 0;
	while (str[i])
	{
		if (str[i] >= 32 && str[i] <= 126)
		{
			write(1, &str[i], 1);
		}
		else
		{
			current = (unsigned char)str[i];
			write(1, "\\", 1);
			j = current / 16;
			write(1, &hex[j], 1);
			j = current % 16;
			write(1, &hex[j], 1);
		}
		i++;
	}
}
