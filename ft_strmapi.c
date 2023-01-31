/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inaranjo <inaranjo@student.42lausan>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 16:43:49 by inaranjo          #+#    #+#             */
/*   Updated: 2022/11/01 16:55:52 by inaranjo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	char	*str;
	int		len;
	int		i;

	if (!s || !f)
		return (NULL);
	i = 0;
	len = ft_strlen(s);
	str = malloc(sizeof(char) * (len +1));
	if (str == NULL)
		return (NULL);
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
int main(void)
{
	char *str = "hello";

	printf("%s", ft_strmapi(str, &ft_putstr));
	return (0);
}

s: La chaîne de caractères sur laquelle itérer.
f: La fonction à appliquer à chaque caractère.

La chaîne de caractères résultant des applications 
successives de ’f’.
Retourne NULL si l’allocation échoue.

Applique la fonction ’f’ à chaque caractère de la 
chaîne de caractères passée en argument pour
créer une nouvelle chaîne de caractères (avec malloc(3))
résultant des applications successives de ’f’.*/
