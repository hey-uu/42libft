/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeyukim <hyeyukim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 10:18:05 by hyeyukim          #+#    #+#             */
/*   Updated: 2022/07/15 11:56:40 by hyeyukim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char		*ptr;
	size_t				i;
	const unsigned char	new_c = (unsigned char) c;

	ptr = (unsigned char *) b;
	i = 0;
	while (i < len)
		ptr[i++] = new_c;
	return (b);
}
