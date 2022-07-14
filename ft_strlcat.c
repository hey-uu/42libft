/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeyukim <hyeyukim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 14:53:54 by hyeyukim          #+#    #+#             */
/*   Updated: 2022/07/14 21:15:14 by hyeyukim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	destlen;
	size_t	srclen;
	size_t	i;

	destlen = ft_strlen(dest);
	srclen = ft_strlen(src);
	if (size <= destlen)
		return (srclen + size);
	dest = &dest[destlen];
	i = 0;
	while (i < size - destlen - 1 && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (destlen + srclen);
}
// #include "libft.h"
// #include "libft.h"
// size_t  ft_strlcat(char *dst, const char *src, size_t dstsize)
// {
//     size_t  srcsize;
//     size_t  orisize;
//     size_t  i;
//     orisize = 0;
//     srcsize = 0;
//     while (dst[orisize])
//         orisize++;
//     while (src[srcsize])
//         srcsize++;
//     if (dstsize > orisize)
//     {
//         i = 0;
//         while (src[i] && i < (dstsize - orisize - 1))
//         {
//             dst[orisize + i] = src[i];
//             i++;
//         }
//         dst[orisize + i] = '\0';
//         return (orisize + srcsize);
//     }
//     return (dstsize + srcsize);
// }
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	dest1[30] = "123";
	char 	src[7] = "456789";
	char	dest2[30] = "123";
	size_t ret1 = strlcat(dest1, src, 20);
	size_t ret2 = ft_strlcat(dest2, src, 20);
	printf("dest = %s\nreturn = %u\n\n", dest1, ret1);
	printf("dest = %s\nreturn = %u\n\n", dest2, ret2);
	//ex05
	printf("ex05\n");
	char	ex05_dest1[50] = "hello my name";	
	char	ex05_src1[50] = " is hunpark!";
	char	ex05_dest2[50] = "hello my name";
	char	ex05_src2[50] = " is hunpark!";
	char	ex05_dest3[50] = "hello my name";
	char	ex05_src3[50] = " is hunpark!";
	char	ex05_dest4[50] = "hello my name";
	char	ex05_src4[50] = " is hunpark!";
	printf("strlcat, n=5 : %lu\ndest = %s\n\n", \
			strlcat(ex05_dest1, ex05_src1, 5), \
			ex05_dest1);
	printf("strlcat, n=16 :%lu\ndest = %s\n\n",\
			strlcat(ex05_dest2, ex05_src2, 16),\
			ex05_dest2);
	printf("ft_strlcat, n=5 : %d\ndest = %s\n\n", \
			ft_strlcat(ex05_dest3, ex05_src3, 5), \
			ex05_dest3);
	printf("ft_strlcat, n=16 : %d\ndest = %s\n\n",\
			ft_strlcat(ex05_dest4, ex05_src4, 16), \
			ex05_dest4);
}*/
