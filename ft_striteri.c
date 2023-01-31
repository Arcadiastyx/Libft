/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inaranjo <inaranjo@student.42lausan>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 09:48:19 by inaranjo          #+#    #+#             */
/*   Updated: 2022/11/02 10:07:17 by inaranjo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr(unsigned int i, char *s)
{
	while (s[i] != '\0')
	{
		write(1, &s[i], 1);
		i++;
	}
}

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}
/*int	main(void)
{
	char *str= "Hello";

	ft_striteri(str,&ft_putstr);
	return (0);
}
*/
/*
s: La chaîne de caractères sur laquelle itérer.
f: La fonction à appliquer à chaque caractère.

Applique la fonction ’f’ à chaque caractère de la chaîne de caractères
transmise comme argument,et en passant son index comme premier argument.
Chaque caractère est transmis par
adresse à ’f’ afin d’être modifié si nécessaire.*/
