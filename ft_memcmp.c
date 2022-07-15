/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeyukim <hyeyukim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 17:09:37 by hyeyukim          #+#    #+#             */
/*   Updated: 2022/07/15 17:43:40 by hyeyukim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*us1 = (unsigned char *) s1;
	const unsigned char	*us2 = (unsigned char *) s2;
	size_t				i;

	i = -1;
	while (++i < n)
		if (us1[i] != us2[i])
			return (us1[i] - us2[i]);
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int main(void)
{
	int arr1[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int arr2[10] = {0, 1, 2, 5, 3, 4, 6, 7, 8, 9};
	printf("my func: \n");
	printf("%d\n", ft_memcmp(arr1, arr2, 0));
	printf("\nanswer: \n");
	printf("%d\n", memcmp(arr1, arr2, 0));

	// char arr3[10] = "\0abcdefg";
	// char arr4[10] = "\0abkkkkkk";
	printf("\n\nmy func: \n");
	printf("%d\n", ft_memcmp((void*)0, (void*)0, sizeof(char) * 10));
	printf("\nanswer: \n");
	printf("%d\n", memcmp((void*)0, (void*)0, sizeof(char) * 10));
}
*/