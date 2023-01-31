/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inaranjo <inaranjo@student.42lausan>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 10:36:02 by inaranjo          #+#    #+#             */
/*   Updated: 2022/11/02 11:13:22 by inaranjo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	i;

	i = n;
	if (i > 2147483647 || i < -2147483648)
		return ;
	if (i < 0)
	{
		i *= -1;
		ft_putchar_fd('-', fd);
	}
	if (i >= 10)
	{
		ft_putnbr_fd(i / 10, fd);
		i %= 10;
	}
	if (i < 10)
	{
		ft_putchar_fd((i + '0'), fd);
	}
}
/*
n: L’entier à écrire.
fd: Le descripteur de fichier sur lequel ecrire.

Écrit l’entier ’n’ sur le descripteur de donné.
*/
