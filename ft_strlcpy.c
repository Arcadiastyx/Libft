/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inaranjo <inaranjo@student.42lausan>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 16:50:08 by inaranjo          #+#    #+#             */
/*   Updated: 2022/10/26 10:10:44 by inaranjo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	while (dstsize && i < dstsize - 1 && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	if (dstsize)
		dst[i] = '\0';
	while (src[i])
		i++;
	return (i);
}
/*int main()
{
  char str[] = "tgsgery";
  char strDest[] = "";
  int r = ft_strlcpy(strDest, str, 4);


  printf("%s\n", strDest);
  printf("%d", r);
}*/

/*strlcpy - Copy a NUL terminated string into a sized buffer. 
- Arguments :
dest: Where to copy the string to
src: Where to copy the string from
size:  size of destination buffer

The result is always a valid NUL-terminated string that fits in the buffer
(unless, of course, the buffer size is zero).
It does not pad out the result like strncpy does.*/
