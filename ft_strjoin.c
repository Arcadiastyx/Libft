/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inaranjo <inaranjo@student.42lausan>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 13:03:30 by inaranjo          #+#    #+#             */
/*   Updated: 2022/10/31 13:28:52 by inaranjo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*newstr;
	size_t	i;
	size_t	j;

	newstr = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (newstr == NULL)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		newstr[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		newstr[i] = s2[j];
		i++;
		j++;
	}
	newstr[i] = '\0';
	return (newstr);
}
/*
int main(void)
{
	char *str1 = "hello";
	char *str2 = " good morning!";

	printf("%s", ft_strjoin(str1, str2));
	return (0);
}

1: La chaîne de caractères préfixe.
s2: La chaîne de caractères suffixe.

La nouvelle chaîne de caractères.
NULL si l’allocation échoue.

Alloue (avec malloc(3)) et retourne une nouvelle chaîne,
résultat de la concaténation de s1 et s2.
*/
