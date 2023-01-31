/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inaranjo <inaranjo@student.42lausan>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 11:32:47 by inaranjo          #+#    #+#             */
/*   Updated: 2022/10/26 15:00:32 by inaranjo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)s + i);
		i++;
	}
	if (s[i] == (char)c)
		return ((char *)s + i);
	return (NULL);
}
/*int	main(void)
{
  int c = 'o';
	printf("%s\n", ft_strchr("Troll", c));
	printf("%s\n", strchr("Troll", c));
	return (0);
}

strchr, strrchr, strchrnul - Rechercher un caractère dans une chaîne.

La fonction strchr() renvoie un pointeur sur la première occurrence 
du caractère c dans la chaîne s.

Les fonctions strchr() et strrchr() renvoient un pointeur sur 
le caractère correspondant, ou NULL si le caractère n'a pas été trouvé.

output : si trouve la premier caracter du (int c) ex c = o str = troll 
result : oll
*/
