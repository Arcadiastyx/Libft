/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inaranjo <inaranjo@student.42lausan>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 16:01:03 by inaranjo          #+#    #+#             */
/*   Updated: 2022/10/26 16:46:42 by inaranjo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && (s1[i] || s2[i]))
	{
		if (s1[i] != s2[i])
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
		i++;
	}
	return (0);
}
/*int main(void)
{
	printf("%d\n",ft_strncmp("Hello","Hellopapichulo",4));
	return (0);
}*/

/*
La fonction strcmp() compare les deux chaînes s1 et s2.
Elle renvoie un entier négatif, nul, ou positif,
si s1 est respectivement inférieure, égale ou supérieure à s2.

La fonction strncmp() est identique sauf qu'elle ne compare que
les n (au plus) premiers caractères de s1 et s2.  

Les fonctions strcmp() et strncmp() renvoient un entier inférieur,
égal ou supérieur à zéro si s1 (ou ses n premiers octets)
est respectivement inférieure, égale ou supérieure à s2.  

Summary : compare s1 a s2 selon le nombre de caractere q-on souhaite.
*/
