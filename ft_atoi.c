/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inaranjo <inaranjo@student.42lausan>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 11:24:50 by inaranjo          #+#    #+#             */
/*   Updated: 2022/10/27 11:54:07 by inaranjo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_atoi(const char *str)
{
	long			i;
	long			result;
	long			sign;
	unsigned char	*str1;

	i = 0;
	result = 0;
	sign = 1;
	str1 = (unsigned char *)str;
	while (str[i] != '\0' && (str[i] == '\n' || str[i] == '\t'
			|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r'
			|| str[i] == ' '))
		i++;
	if (str[i] == '-')
		sign = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str1[i] != '\0' && ('0' <= str1[i] && str1[i] <= '9'))
	{
		result *= 10;
		result += str[i] - '0';
		i++;
	}
	return (sign * result);
}
/*
int main(void)
{
	char *str;
	int p;

	str = "-2147483648";
	p = ft_atoi(str);
	printf("%d", p);
	return (0);
}*/

/*
atoi, atol, atoll, atoq - Convertir une chaîne en entier  

La fonction atoi() convertit le début de la chaîne pointée par
nptr en entier de type int . Le résultat est identique à un appel

Le résultat de la conversion.*/
