/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inaranjo <inaranjo@student.42lausan>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 10:08:02 by inaranjo          #+#    #+#             */
/*   Updated: 2022/11/02 10:14:22 by inaranjo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}
/*
c: Le caractère à écrire.
fd: Le descripteur de fichier sur lequel écrire. (fichier donne)

Écrit le caractère ’c’ sur le descripteur de fichier donné.
*/
