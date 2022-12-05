/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: troudot <troudot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 05:03:06 by troudot           #+#    #+#             */
/*   Updated: 2022/12/04 06:44:58 by troudot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	unsigned char	*str;

	str = ((unsigned char *)s) - 1;
	while (*++str != ((unsigned char)c))
		if (*str == 0)
			return (0);
	return ((char *)str);
}