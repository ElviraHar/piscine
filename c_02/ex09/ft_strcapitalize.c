/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elharuty <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 22:15:38 by elharuty          #+#    #+#             */
/*   Updated: 2022/10/13 18:15:07 by elharuty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i - 1] >= 0 && str[i - 1] <= 47)
			|| (str[i - 1] >= 58 && str[i - 1] <= 64))
		{
			if ((str[i] >= 97 && str[i] <= 122))
				str[i] -= 32;
		}
		else if ((str[i - 1] >= 91 && str[i - 1] <= 96) || (str[i - 1] >= 123))
		{
			if ((str[i] >= 97 && str[i] <= 122))
				str[i] -= 32;
		}
		else
		{
			if (str[i] >= 65 && str[i] <= 90)
				str[i] += 32;
		}
		i++;
	}
	return (str);
}
