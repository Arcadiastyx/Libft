/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inaranjo <inaranjo@student.42lausan>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 16:46:43 by inaranjo          #+#    #+#             */
/*   Updated: 2022/11/05 16:56:13 by inaranjo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	if (lst == NULL)
		return ;
	while (*lst)
	{
		tmp = (*lst)->next;
		ft_lstdelone(*lst, del);
		(*lst) = tmp;
	}
}
/*
lst: L’adresse du pointeur vers un élément.
del: L’adresse de la fonction permettant de supprimer le contenu d’un élément.
valeur retour : rien.
Supprime et libère la mémoire de l’élément passé en paramètre,
et de tous les éléments qui suivent, à l’aide de ’del’ et de free(3)
Enfin, le pointeur initial doit être mis à NULL.*/
