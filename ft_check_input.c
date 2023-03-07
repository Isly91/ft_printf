/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_check_input.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: ibehluli <ibehluli@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/01 16:22:10 by ibehluli      #+#    #+#                 */
/*   Updated: 2023/02/24 17:39:37 by ibehluli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strchr(const char *s, int c)
{
	int				i;
	unsigned char	variable;

	i = 0;
	variable = (unsigned char) c;
	if (variable)
	{
		while (s[i] != '\0')
		{
			if (s[i] == variable)
				return ((char *) s + i);
			i++;
		}
		return (0);
	}
	else
		return ((char *)s + ft_strlen(s));
}
