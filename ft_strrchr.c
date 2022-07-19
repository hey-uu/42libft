/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeyukim <hyeyukim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 15:07:48 by hyeyukim          #+#    #+#             */
/*   Updated: 2022/07/19 15:23:11 by hyeyukim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	new_c = (char) c;
	char		*pos;

	pos = (void *)0;
	while (*s)
	{
		if (*s == new_c)
			pos = (char *) s;
		s++;
	}
	if (!new_c)
		return ((char *) s);
	return (pos);
}
