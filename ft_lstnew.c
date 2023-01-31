/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inaranjo <inaranjo@student.42lausan>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 15:03:13 by inaranjo          #+#    #+#             */
/*   Updated: 2022/11/05 15:03:17 by inaranjo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_cell;

	new_cell = (t_list *)malloc(sizeof(t_list));
	if (new_cell == NULL)
		return (NULL);
	new_cell->content = content;
	new_cell->next = NULL;
	return (new_cell);
}
/*
content: Le contenu du nouvel élémen
valeur de retour :Le nouvel élément
alloue (avec malloc(3)) et renvoie un nouvel élément.
La variable membre ’content’ est initialisée à 
l’aide de la valeur du paramètre ’content’.
La variable ’next’ est initialisée à NULL.*/
