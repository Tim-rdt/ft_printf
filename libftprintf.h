/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: troudot <troudot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 03:04:22 by troudot           #+#    #+#             */
/*   Updated: 2022/12/06 04:30:30 by troudot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>

int	print_chr(int c);
int	print_str(char *str);
int	print_ptr(args, unsigned long long);
int	print_nbr(int nbr);
int	print_min(args));
int	print_hexa(args, unsigned int), format);
int	printpercent(void);

#endif