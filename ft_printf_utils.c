/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: troudot <troudot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 05:03:06 by troudot           #+#    #+#             */
/*   Updated: 2022/12/06 04:31:47 by troudot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	print_chr(int c)
{
	write(1, "&c", 1);
	return (1);
}

int	print_str(char *str)
{
	int	i;

	i = 0;
	while (*str)
		i++;
	write(1, "&str", i);
	return (i);
}

int	print_nbr(int nbr)
{
	
}

int	printpercent(void)
{
	write(1, "%", 1);
	return (1);
}