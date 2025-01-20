/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshenghu <lshenghu@student.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 11:17:21 by lshenghu          #+#    #+#             */
/*   Updated: 2024/11/22 11:24:19 by lshenghu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_spec(char spec, va_list args, int *len)
{
	if (spec == 'c')
		ft_word(va_arg(args, int), len);
	else if (spec == 's')
		ft_string(va_arg(args, char *), len);
	else if (spec == 'd' || spec == 'i')
		ft_number(va_arg(args, int), len);
	else if (spec == 'p')
		ft_pointer(va_arg(args, size_t), len);
	else if (spec == 'u')
		ft_positve_num(va_arg(args, unsigned int), len);
	else if (spec == 'x')
		ft_hex(va_arg(args, unsigned int), len, 'x');
	else if (spec == 'X')
		ft_hex(va_arg(args, unsigned int), len, 'X');
	else if (spec == '%')
		ft_word('%', len);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		lenn;

	lenn = 0;
	va_start(args, str);
	while (*str != '\0')
	{
		if (*str == '%')
		{
			str++;
			ft_spec(*str, args, &lenn);
			str++;
		}
		else
		{
			ft_word(*str, &lenn);
			str++;
		}
	}
	va_end(args);
	return (lenn);
}
/*
int	main(void)
{
	int varr = 555;
	int var = 1531;
	int b = -1531;
	char	*ss;
	int len = ft_printf("Hello, %s! Number: %d\n", "World", 42);
	int len1 = ft_printf("Hello, %s! Number: \n", "World");

	ss = "hello";
	ft_printf("hello\n");
	ft_printf("hello: %s\n", ss);
	ft_printf("Using %%d: %d\n", var);
	ft_printf("Using %%x: %x\n", var);
	ft_printf("Using %%X: %X\n", var);
	ft_printf("Using %%p: %p\n", varr);
	ft_printf("Using %%u: %u\n", varr);
	ft_printf("Using %%x: %x\n", b);
	ft_printf("Using %%d: %d\n", b);
	ft_printf("Using %%p: %p\n", b);
	ft_printf("Hello, %s! Number: %d\n", "World", 42);
	ft_printf("Printed %d characters.\n", len);
	ft_printf("Hello, %s! Number: \n", "World");
	ft_printf("Printed %d characters.\n", len1);
}*/
