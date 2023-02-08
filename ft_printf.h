/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ibehluli <ibehluli@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/01 14:25:59 by ibehluli      #+#    #+#                 */
/*   Updated: 2023/02/08 18:25:48 by ibehluli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int	ft_printf(const char *input, ...);
int	ft_printf_flags(char input, va_list args);
int	ft_check_input(const char *input);
int	ft_putstring(char *str);
int	ft_putpointer(size_t ptr);
int	ft_putnumber(int number);
int	ft_putunsigned(unsigned int number);
int	ft_puthexa(size_t exa, char c);
int	ft_putchar(int c);

#endif