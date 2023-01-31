/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inaranjo <inaranjo@student.42lausan>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 12:04:20 by inaranjo          #+#    #+#             */
/*   Updated: 2022/10/27 14:14:56 by inaranjo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*ptr;

	ptr = (void *)malloc(count * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, size * count);
	return (ptr);
}
/*
malloc, free, calloc, realloc, reallocarray
Allocation et libération de mémoire dynamique

Cette fonction alloue un bloc de mémoire en initialisant tous
ces octets à la valeur 0. Bien que relativement proche de la fonction malloc,
deux aspects les différencient :

L'initialisation : calloc met tous les octets du bloc à la valeur 0 
                   alors que malloc ne modifie pas la zone de mémoire.

Les paramètres d'appels : calloc requière deux paramètres 
(le nombre d'éléments consécutifs à allouer et la taille d'un élément)
alors que malloc attend la taille totale du bloc à allouer.

elementCount: permet de spécifier le nombre d'éléments
consécutifs à réserver dans le bloc de mémoire.

elementSize : permet de fixer la taille 
(en nombre d'octets) d'un élément.

Au total, la zone de mémoire allouée occupera donc
elementCount * elementSize octets.

Dans le cas où le bloc de mémoire ne pourrait vous être réservé
(plus de mémoire disponible, par exemple),
le pointer NULL vous sera retourné.
On devrait normalement et systématiquement tester
que l'on ait pas cette valeur. Néanmoins cela n'est pas toujours
fait par les développeurs. Donc un petit conseil,
utilisez au moins un assert durant les phases de développement.


Si tout ce passe bien, la fonction vous renvoie un pointeur
sur la zone nouvellement allouée. Attention, ce pointeur est
de type pointeur générique (void *) : si nécessaire, 
il est donc de votre responsabilité de "caster" votre pointeur
vers un autre type (du moins si vous souhaitez ne pas avoir 
de warning affiché pas le compilateur,
ce que je vous recommande vivement).
*/
