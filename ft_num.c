/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_num.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshenghu <lshenghu@student.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 13:46:16 by lshenghu          #+#    #+#             */
/*   Updated: 2024/11/22 11:09:16 by lshenghu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_number(long num, int *len)
{
	if (num < 0)
	{
		ft_word('-', len);
		num = -num;
	}
	if (num > 9)
		ft_number(num / 10, len);
	ft_word(num % 10 + '0', len);
}

void	ft_pointer(size_t ptr, int *len)
{
	char	str[20];
	int		i;
	char	*base16;

	base16 = "0123456789abcdef";
	i = 0;
	if (ptr == 0)
	{
		write(1, "(nil)", 5);
		(*len) += 5;
		return ;
	}
	write(1, "0x", 2);
	(*len) += 2;
	while (ptr != 0)
	{
		str[i] = base16[ptr % 16];
		ptr = ptr / 16;
		i++;
	}
	while (i--)
	{
		ft_word(str[i], len);
	}
}

void	ft_hex(unsigned int x, int *len, char is_x)
{
	char	str[20];
	char	*base16;
	int		i;

	i = 0;
	if (is_x == 'x')
		base16 = "0123456789abcdef";
	else
		base16 = "0123456789ABCDEF";
	if (x == 0)
	{
		ft_word('0', len);
		return ;
	}
	while (x != 0)
	{
		str[i] = base16[x % 16];
		x = x / 16;
		i++;
	}
	while (i--)
	{
		ft_word(str[i], len);
	}
}

void	ft_positve_num(unsigned int u, int *len)
{
	if (u > 9)
		ft_positve_num(u / 10, len);
	ft_word(u % 10 + '0', len);
}
