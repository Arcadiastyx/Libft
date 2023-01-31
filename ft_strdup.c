/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inaranjo <inaranjo@student.42lausan>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 14:18:28 by inaranjo          #+#    #+#             */
/*   Updated: 2022/10/27 15:00:23 by inaranjo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*newstr;
	int		i;
	int		slen;

	slen = (int) ft_strlen(s) + 1;
	newstr = malloc(sizeof(char) * slen);
	if (newstr == NULL)
		return (NULL);
	i = 0;
	while (s[i])
	{
		newstr[i] = s[i];
		i++;
	}
	newstr[i] = '\0';
	return (newstr);
}
/*
int main(void)
{
	char *str;

	str = "mahmudul";
	printf("Before Allocation: %s\n", str);
	printf("After  Allocation: ");
	printf("%s\n", ft_strdup(str));
	return (0);
}*/
/*
 strdup, strndup, strdupa, strndupa - Dupliquer une chaîne.

La fonction strdup() renvoie un pointeur sur une nouvelle 
chaîne de caractères qui est dupliquée depuis s.
La mémoire occupée par cette nouvelle chaîne est obtenue en appelant malloc(3),
et peut (doit) donc être libérée avec free(3).

La fonction strdup() renvoie un pointeur sur 
la chaîne dupliquée,
ou NULL s'il n'y avait pas assez de mémoire.
*/
