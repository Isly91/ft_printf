/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printer.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ibehluli <ibehluli@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/07 10:22:42 by ibehluli      #+#    #+#                 */
/*   Updated: 2023/02/08 18:23:33 by ibehluli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstring(char *str)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	if (!str)
		return (write(1, "(null)", 6));
	while (str[i] != '\0')
	{
		count += ft_putchar(str[i]);
		i++;
	}
	return (count);
}

int	ft_putpointer(size_t ptr)
{
	int	count;

	count = 0;
	count += write(1, "0x", 2);
	count += ft_puthexa(ptr, 'x');
	return (count);
}

int	ft_putnumber(int number)
{
	int	count;

	count = 0;
	if (number == -2147483648)
		count += write(1, "-2147483648", 11);
	else if (number > 9)
	{
		count += ft_putnumber(number / 10);
		count += ft_putnumber(number % 10);
	}
	else if (number < 0)
	{
		count += ft_putchar('-');
		count += ft_putnumber(number * -1);
	}
	else
		count += ft_putchar(number + '0');
	return (count);
}

int	ft_putunsigned(unsigned int number)
{
	int	count;
	int	unsigned_number_in_int;

	count = 0;
	if (number > 9)
		count += ft_putunsigned(number / 10);
	unsigned_number_in_int = number % 10 + '0';
	count += ft_putchar(unsigned_number_in_int);
	return (count);
}

int	ft_puthexa(size_t exa, char c)
{
	int		count;
	char	*buffer;

	count = 0;
	if (c == 'X')
		buffer = "0123456789ABCDEF";
	else
		buffer = "0123456789abcdef";
	if (exa >= 16)
	{
		count += ft_puthexa(exa / 16, c);
		count += ft_puthexa(exa % 16, c);
	}
	else
		count += ft_putchar(buffer[exa % 16]);
	return (count);
}
