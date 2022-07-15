/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeyukim <hyeyukim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 11:24:46 by hyeyukim          #+#    #+#             */
/*   Updated: 2022/07/15 17:43:40 by hyeyukim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	const int		len = ft_strlen(s1);
	char			*new;
	int				i;

	new = malloc(len + 1);
	if (!new)
		return (NULL);
	i = -1;
	while (s1[++i])
		new[i] = s1[i];
	new[i] = '\0';
	return (new);
}
//Don't Repeat yourself
/*
#include <stdio.h>
#include <string.h>
int main(void)
{
   char *str;
   char *tmp = "HAHAHA \0 tu me vois pas !";

   str = ft_strdup(tmp);
   if (strcmp(str, tmp))
      printf("1");
   free(str);
   printf("0");
}
*/