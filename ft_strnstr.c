/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inaranjo <inaranjo@student.42lausan>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 10:15:42 by inaranjo          #+#    #+#             */
/*   Updated: 2022/10/27 11:14:18 by inaranjo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	l;
	char			*str1;
	char			*needle1;

	i = 0;
	str1 = (char *)haystack;
	needle1 = (char *)needle;
	l = ft_strlen(needle1);
	if (l == 0)
		return (str1);
	while (str1[i] && i < len)
	{
		j = 0;
		while (needle1[j] == str1[i + j] && (i + j) < len)
		{
			if (j == l - 1)
				return (str1 + i);
			j++;
		}
		i++;
	}
	return (0);
}
/*int main()
{
	char haystack[20] = "TutorialsPoint";
	char needle[10] = "als";
	char *ret;

	ret = ft_strnstr("lorem ipsum dolor sit amet", "sit", 10);

	printf("%s\n", ret);
	printf("%s", ft_strnstr("lorem ipsum dolor sit amet", "dolor", 17));

	return (0);
}*/
/*
strnstr - localise une sous-chaîne dans une chaîne de caractères.

La fonction Fn strnstr localise la première occurrence
de la chaîne à terminaison nulle Fa little dans 
la chaîne Fa big , où pas plus de Fa len caractères sont recherchés.
Les caractères qui apparaissent après un caractère `\0'
ne sont pas recherchés. Étant donné que la fonction
Fn strnstr est une API spécifique à Fx,elle ne doit être utilisée
que lorsque la portabilité n'est pas un problème.

Si Fa petit est une chaîne vide, Fa grand est renvoyé ;
si Fa little n'apparaît nulle part dans Fa big , NULL est renvoyé ;
sinon, un pointeur sur le premier caractère de
la première occurrence de Fa little est renvoyé.*/
