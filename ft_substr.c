/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inaranjo <inaranjo@student.42lausan>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 09:32:09 by inaranjo          #+#    #+#             */
/*   Updated: 2022/10/31 13:02:12 by inaranjo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res;
	size_t	len_tmp;

	if (s == NULL)
		return (NULL);
	if ((unsigned int)ft_strlen(s) < start)
		return (ft_strdup(""));
	len_tmp = ft_strlen(s + start);
	if (len_tmp < len)
		len = len_tmp;
	res = (char *)malloc(sizeof(char) * (len + 1));
	if (!res)
		return (NULL);
	ft_strlcpy(res, s + start, len + 1);
	return (res);
}
/*
int main(void) {
  printf("%s\n", ft_substr("tripouille", 2, 1));
  return 0;
}

s: La chaîne de laquelle extraire la nouvelle chaîne.
start: L’index de début de la nouvelle chaîne dans la chaîne ’s’.
len: La taille maximale de la nouvelle chaîne.

La nouvelle chaîne de caractères. NULL si l’allocation échoue.

Alloue (avec malloc(3)) et retourne une chaîne de caractères
issue de la chaîne ’s’.
Cette nouvelle chaîne commence à l’index
’start’ et a pour taille maximale ’len’.
*/
