/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeyukim <hyeyukim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 16:23:01 by hyeyukim          #+#    #+#             */
/*   Updated: 2022/07/11 08:03:09 by hyeyukim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

static void	ft_findidx(char const *s1, char const *s2, int *l, int *len)
{
	int		c1;
	int		c2;
	int		r;

	c1 = 0;
	c2 = 0;
	r = ft_strlen(s1) - 1;
	while (*l <= r)
	{
		if (ft_strchr(s2, *(s1 + *l)) != 0)
			(*l)++;
		else
			c1 = 1;
		if (ft_strchr(s2, *(s1 + r)) != 0)
			r--;
		else
			c2 = 1;
		if (*l > r)
			*len = 0;
		if (c1 && c2)
			break ;
	}
	*len = r - *l + 1;
}

char	*ft_strtrim(char const *s1, char const *s2)
{
	int		len;
	int		l;
	char	*s;

	if (!s1 || !s2)
		return (NULL);
	l = 0;
	if (!*s1)
		len = 0;
	else if (!*s2)
		len = ft_strlen(s1);
	else
		ft_findidx(s1, s2, &l, &len);
	s = (char *)malloc(sizeof(char) * (len + 1));
	if (!s)
		return (NULL);
	ft_strlcpy(s, s1 + l, len + 1);
	return (s);
}
/*
#include <stdio.h>
int main(void)
{
	char *s1 = "  \t \t \n   \n\n\n\t";
	char *s2 = "";
	char *ret = ft_strtrim(s1, " \n\t");


	printf("my fc : %s\n", ret);
	printf("ans : %s\n", s2);
	
	char *s3 = ft_strtrim("   xxx   xxx", " x");	
	char *s4 = "";

	printf("my fc : %s\n", s3);
	printf("ans : %s\n", s4);

	char *s = ft_strtrim("tripouille   xxx", " x");
	printf("my fc : %s\n", s);
	printf("ans : %s\n", "tripouille");


	s = ft_strtrim("   xxxtripouille   xxx", " x");
	printf("my fc : %s\n", s);
	printf("ans : %s\n", "tripouille");

	s = ft_strtrim("123", "");
	printf("my fc : %s\n", s);
	printf("ans : %s\n", "123");

	s = ft_strtrim("abcdba", "acb");
	printf("my fc : %s\n", s);
	printf("ans : %s\n", "d");

	char *s5 = "\t   \n\n\n  \n\n\t   \
	 Hello \t  Please\n Trim me !\t\t\t\n  \t\t\t\t  ";
	char *s6 = "Hello \t  Please\n Trim me !";
	printf("my fc : %s\n", ft_strtrim(s5,  " \n\t"));
	printf("ans : %s\n", s6);
}
*/