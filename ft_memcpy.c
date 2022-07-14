/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeyukim <hyeyukim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 17:59:32 by hyeyukim          #+#    #+#             */
/*   Updated: 2022/07/12 10:57:16 by hyeyukim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*dst2;
	unsigned char	*src2;

	i = -1;
	if (!dst && !src)
		return ((void *) 0);
	dst2 = (unsigned char *)dst;
	src2 = (unsigned char *)src;
	while (++i < n)
		dst2[i] = src2[i];
	return (dst);
}
/*
#include <stdio.h>
#include <string.h>

int dst1[10];
int dst2[10];
int src[10] = {1, 2,3 ,4 , 4,5};

int main(void)
{
	ft_memcpy(dst1, NULL, sizeof(int) * 10);
	for (int i = 0 ; i < 10 ; i++)
		printf("%d", dst1[i]);
	printf("\n");
	memcpy(dst2, NULL, sizeof(int) * 10);
	for (int i = 0 ; i < 10 ; i++)
		printf("%d", dst2[i]);
	printf("\n");
}
*/