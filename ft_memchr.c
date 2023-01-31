/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inaranjo <inaranjo@student.42lausan>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 16:46:56 by inaranjo          #+#    #+#             */
/*   Updated: 2022/10/27 09:55:02 by inaranjo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *)s;
	while (i < n)
	{
		if (str[i] == (unsigned char)c)
			return ((void *) &str[i]);
		i++;
	}
	return (NULL);
}
/*int main(void)
{
	char src[50] = "mahmudulhasanjony";
	char *ret;

	ret = ft_memchr(src, 's', 15);
	printf("%s", ret);
	return (0);
}*/

/*
memchr, memrchr - Rechercher un caractère dans une zone mémoire. 

La fonction memchr() examine les n premiers octets de la zone mémoire
pointée par s à la recherche du caractère c. Le premier octet correspondant à 
c (interprété comme un unsigned char) arrête l'opération.

Les fonctions memchr() et memrchr() renvoient un pointeur sur 
l'octet correspondant, ou NULL si le caractère n'est pas présent
dans la zone de mémoire concernée. */
