/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeyukim <hyeyukim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 15:34:12 by hyeyukim          #+#    #+#             */
/*   Updated: 2022/07/15 17:43:40 by hyeyukim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	const unsigned char	*us1 = (unsigned char *) s1;
	const unsigned char	*us2 = (unsigned char *) s2;
	size_t				i;

	if (!n)
		return (0);
	i = 0;
	while ((us1[i] || us2[i]) && i < n)
	{
		if (us1[i] != us2[i])
			return (us1[i] - us2[i]);
		i++;
	}
	return (0);
}

/*
#include <stdio.h>
#include <string.h>

int main(void)
{
	printf("answer: %d\n", strncmp("a","",6));
	printf("my func: %d\n", ft_strncmp("a", "", 6));
	printf("answer: %d\n", strncmp("","a",6));
	printf("my func: %d\n", ft_strncmp("", "a", 6));
	printf("answer: %d\n", strncmp("","",0));
	printf("my func: %d\n", ft_strncmp("", "", 0));
	printf("answer: %d\n", strncmp("","",6));
	printf("my func: %d\n", ft_strncmp("", "", 6));
}
*/