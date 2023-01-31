/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inaranjo <inaranjo@student.42lausan>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 15:02:14 by inaranjo          #+#    #+#             */
/*   Updated: 2022/10/26 16:00:29 by inaranjo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *) s + i);
		i--;
	}
	return (NULL);
}
/*int main()
{
	char str[] = "trollpick";
	char *output;

	output = ft_strrchr(str, 'p');
	printf("%s",output);
	return (0);
}
fonction strrchr() renvoie un pointeur sur
la dernière occurrence du caractère c dans la chaîne s.

les fonctions strchr() et strrchr() renvoient un pointeur sur 
le caractère correspondant, ou NULL si le caractère n'a pas été trouvé.
*/
