/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeyukim <hyeyukim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 09:41:19 by hyeyukim          #+#    #+#             */
/*   Updated: 2022/07/09 11:37:11 by hyeyukim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*new;
	size_t			total;
	size_t			i;

	if (size > SIZE_MAX / count)
		return (NULL);
	total = count * size;
	new = (unsigned char *)malloc(total);
	if (!new)
		return (NULL);
	i = -1;
	while (++i < total)
		new[i] = 0;
	return ((void *) new);
}
/*
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
int main(void)
{
	printf("%lu\n", sizeof(size_t));
	printf("%lu", SIZE_MAX);
}
*/