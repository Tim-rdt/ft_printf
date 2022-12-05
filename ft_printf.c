/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: troudot <troudot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 03:20:10 by troudot           #+#    #+#             */
/*   Updated: 2022/12/05 03:36:44 by troudot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_module(va_list args, const char str)
{
	int	len;

	len = 0;
	if (str == 'c')
		len += ft_strchr(va_arg(args, int));
	if (str == 's')
		//affiche str
	if (str == 'p')
		//L’argument de pointeur void * doit être affiché en hexadécimal.
	if (str == 'd')
		//%d Affiche un nombre décimal (base 10).
	if (str == 'i')
		//%i Affiche un entier en base 10.
	if (str == 'u')
		//%u Affiche un nombre décimal non signé (base 10).
	if (str == 'x')
		//%x Affiche un nombre en hexadécimal (base 16) avec des lettres minuscules.
	if (str == 'X')
		//%X Affiche un nombre en hexadécimal (base 16) avec des lettres majuscules.
	if (str == '%')
		//%% Affiche un signe pourcentage.
	return (len);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	va_list	args;
	int		len;

	i = 0;
	len = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i++] == '%')
		{
			len += ft_module(args, str);
			continue ;
		}
		else
			// print first char
		i++
	}
	va_end(args);
	return (len);
}

/* int main(void)
{
	ft_printf(3, "Saturday", "Sunday", "Monday");
	printf("\n");
	ft_printf(5, "Monday", "Tuesday", "Wed", "Thursday", "Friday");
} */