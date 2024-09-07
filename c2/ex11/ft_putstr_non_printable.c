/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sellyani <sellyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 15:39:28 by sellyani          #+#    #+#             */
/*   Updated: 2024/09/07 15:39:31 by sellyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_hexa(char c)
{
	char	*tab;

	tab = "0123456789abcdef";
	ft_putchar(tab[c / 16]);
	ft_putchar(tab[c % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str [i] >= 0 && str[i] <= 31) || str[i] == 127)
		{
			write(1, "\\", 2);
			print_hexa(str[i]);
		}
		else
			ft_putchar(str[i]);
		i++;
	}
}
