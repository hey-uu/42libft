/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeyukim <hyeyukim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 15:07:48 by hyeyukim          #+#    #+#             */
/*   Updated: 2022/07/15 17:43:40 by hyeyukim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	new_c = (char) c;
	char		*pos;

	pos = (void *)0;
	while (*s)
	{
		if (*s == new_c)
			pos = (char *) s;
		s++;
	}
	if (!new_c)
		return ((char *) s);
	return (pos);
}
/*

#include <stdio.h>
#include <string.h>

int main(void)
{
	char	str[32] = "abdddcd\0heretheend";
	printf("test: \n");
	for (int i = 0 ; i < 10 ; i++)
		printf("%c\n", *(strrchr(str, (int)'b')+i));
	printf("\n\nmy func: \n");
	for (int i = 0 ; i < 10 ; i++)
		printf("%c\n", *(ft_strrchr(str, (int)'b')+i));	
}
*/