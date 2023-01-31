/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inaranjo <inaranjo@student.42lausan>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 13:29:28 by inaranjo          #+#    #+#             */
/*   Updated: 2022/10/31 14:39:51 by inaranjo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;

	if (s1 == NULL || set == NULL)
		return (NULL);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	i = ft_strlen(s1);
	while (i && ft_strchr(set, s1[i]))
		i--;
	return (ft_substr(s1, 0, i + 1));
}

/*
Alloue (avec malloc(3)) et retourne une copie
de la chaîne passée en paramètre sans les espaces blancs
au debut et à la fin de cette chaîne. 
On considère comme espaces blancs les caractères ' ', '\n' et '\t'.
Si s ne contient pas d'espaces blancs au début ou à la fin,
la fonction renvoie une copie de s. Si l'allocation echoue,
la fonction renvoie NULL.
*/
