/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeyukim <hyeyukim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 14:55:56 by hyeyukim          #+#    #+#             */
/*   Updated: 2022/07/20 07:43:52 by hyeyukim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./stdlib.h"

char	*ft_strchr(const char *s, int c)
{
	const char	new_c = (char) c;
	char		*str;

	str = (char *) s;
	while (*str && *str != new_c)
		str++;
	if (*str != new_c)
		return (FT_NULL);
	return (str);
}
