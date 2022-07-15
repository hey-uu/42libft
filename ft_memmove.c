/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeyukim <hyeyukim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 13:48:09 by hyeyukim          #+#    #+#             */
/*   Updated: 2022/07/15 17:43:40 by hyeyukim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *str, size_t len)
{
	size_t					i;
	unsigned char			*dst2;
	const unsigned char		*str2 = (const unsigned char *) str;

	dst2 = (unsigned char *)dst;
	if (dst > str)
	{
		i = len;
		while (i--)
			dst2[i] = str2[i];
	}
	else if (dst < str)
	{
		i = -1;
		while (++i < len)
			dst2[i] = str2[i];
	}
	return (dst);
}
/*
#include <stdio.h>
#include <string.h>
int main(void)
{
	int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	ft_memmove(arr, arr, sizeof(int) * 5);
	for (int i = 0 ; i < 10 ; i++)
		printf("%d ", arr[i]);
	printf("\n");
	int arr2[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	memmove(arr2, arr2, sizeof(int) * 5);
	for (int i = 0 ; i < 10 ; i++)
		printf("%d ", arr2[i]);	
}
*/