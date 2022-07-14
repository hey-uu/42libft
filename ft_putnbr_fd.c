/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeyukim <hyeyukim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 20:58:34 by hyeyukim          #+#    #+#             */
/*   Updated: 2022/07/14 22:09:08 by hyeyukim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	arr[11];
	int		i;

	if (n == 0)
		write(fd, "0", sizeof(char));
	i = 0;
	if (n < 0)
		write(fd, "-", sizeof(char));
	while (n != 0)
	{
		arr[i++] = n % 10 + '0';
		n /= 10;
	}
	while (--i > 0)
		write(fd, &arr[i], sizeof(char));
}
