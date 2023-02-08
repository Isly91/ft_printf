/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_check_input.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: ibehluli <ibehluli@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/01 16:22:10 by ibehluli      #+#    #+#                 */
/*   Updated: 2023/02/08 18:17:39 by ibehluli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check_input(const char *input)
{
	int	i;

	i = 0;
	while (input[i])
	{
		if (input[i] == '%')
		{
			i++;
			if (input[i] != 'X' && input[i] != 'x' && input[i] != 'c'
				&& input[i] != 's' && input[i] != 'p' && input[i] != 'd'
				&& input[i] != 'i' && input[i] != 'u' && input[i] != '%')
				return (0);
		}
		i++;
	}
	return (1);
}
