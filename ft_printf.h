/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshenghu <lshenghu@student.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 16:21:08 by lshenghu          #+#    #+#             */
/*   Updated: 2024/11/22 10:59:28 by lshenghu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdarg.h>
# include <stddef.h>
# include <stdlib.h>

int				ft_printf(const char *str, ...);
void			ft_word(char c, int *len);
void			ft_string(char *args, int *len);
void			ft_number(long num, int *len);
void			ft_hex(unsigned int x, int *len, char is_x);
void			ft_pointer(size_t ptr, int *len);
void			ft_positve_num(unsigned int u, int *len);

#endif
