/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inaranjo <inaranjo@student.42lausan>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 09:55:47 by inaranjo          #+#    #+#             */
/*   Updated: 2022/10/27 10:15:04 by inaranjo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}
/*int main(void)
{
	char str1[50] = "mahmudul hasan";
	char str2[50] = "mahmudul hapan";
	int n = 14;
	printf("%d", ft_memcmp(str1, str2, n));
	return (0);
}*/

/*
La fonction memcmp() compare les n premiers octets des zones mémoire s1 et s2.
Elle renvoie un entier inférieur, égal, ou supérieur à zéro,
si s1 est respectivement inférieure, égale ou supérieur à s2.

La fonction memcmp() renvoie un entier négatif, nul ou positif
si les n premiers octets de s1 sont respectivement inférieurs,
égaux ou supérieurs aux n premiers octets de s2.*/
