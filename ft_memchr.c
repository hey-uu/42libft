/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeyukim <hyeyukim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 16:42:49 by hyeyukim          #+#    #+#             */
/*   Updated: 2022/07/09 14:22:28 by hyeyukim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

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
/*
#include <stdio.h>
#include <string.h>

int main(void)
{
	printf("\nmy func:\n");
	printf("%s\n\n", (char *)ft_memchr((void *)0, '\xde', 15));
	printf("aswer:\n");
	printf("%s\n\n", (char *)memchr("asdf", '\xde', 15));
	
	printf("\nmy func:\n");
	int arr[10] = {0, 1, 2, 3, 4,5 ,6 ,7 ,8, 9};
	for (int i = 0 ; i < 4 ; i++)
		printf("%d ", *((int *)ft_memchr(arr, 4, 10 * sizeof(int))+i));
	printf("\naswer:\n");
	for (int i = 0 ; i < 4 ; i++)
		printf("%d ", *((int *)memchr(arr, 4, 10 * sizeof(int))+i));
}
*/