/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeyukim <hyeyukim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 09:41:19 by hyeyukim          #+#    #+#             */
/*   Updated: 2022/07/14 21:59:23 by hyeyukim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*new;
	size_t			total;
	size_t			i;

	if (!count || (count > 0 && size > SIZE_MAX / count))
		return (NULL);
	total = count * size;
	new = malloc(total);
	if (!new)
		return (NULL);
	i = -1;
	while (++i < total)
		new[i] = 0;
	return ((void *) new);
}

// #include <stdio.h>
// #include <limits.h>
// #include <stdlib.h>
// int main(void)
// {
// 	char *s = malloc(0);
// 	if (s == NULL)
// 		printf("ft_calloc retuns NULL!\n");
// 	else
// 		printf("ft_calloc doesn't return NULL!\n");
// 	char *ans = calloc(1, 0);
// 	if (ans == NULL)
// 		printf("calloc retuns NULL!\n");
// 	else
// 		printf("calloc doesn't return NULL!\n");
// }