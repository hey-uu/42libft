/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeyukim <hyeyukim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 17:59:32 by hyeyukim          #+#    #+#             */
/*   Updated: 2022/07/20 07:43:52 by hyeyukim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*dst2;
	unsigned char	*src2;

	i = -1;
	if (!dst && !src)
		return (FT_NULL);
	dst2 = (unsigned char *)dst;
	src2 = (unsigned char *)src;
	while (++i < n)
		dst2[i] = src2[i];
	return (dst);
}
