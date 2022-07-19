/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeyukim <hyeyukim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 16:42:49 by hyeyukim          #+#    #+#             */
/*   Updated: 2022/07/19 15:22:04 by hyeyukim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char		*s2;
	const unsigned char	new_c = (unsigned char) c;
	size_t				i;

	s2 = (unsigned char *) s;
	i = -1;
	while ((++i < n) && (*s2 != new_c))
		s2++;
	if (i == n)
		return (NULL);
	return ((void *) s2);
}
