/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: troudot <troudot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 03:20:10 by troudot           #+#    #+#             */
/*   Updated: 2022/12/06 04:42:22 by troudot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static int	format(va_list args, const char str)
{
	int	len;

	len = 0;
	if (str == 'c')
		len += print_chr(va_arg(va_arg(args, int)));
	if else (str == 's')
		len += print_str(va_arg(args, char *));
	if else (str == 'p') //pas fait
		len += print_ptr(va_arg(args, unsigned long long));
	if else (str == 'd' || str == i) //pas fait
		len += print_nbr(va_arg(args, int));
	if else (str == 'u') //pas fait
		len += print_min(va_arg(args, unsigned int));
	if else (str == 'X' || str == 'x') //pas fait
		len += print_hexa(va_arg(args, unsigned int), format);
	iqf else (str == '%')
		len += printpercent(void);
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
			len += format(args, str);
			continue ;
		}
		else
			lem += print_chr(str[i]);
		i++;
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