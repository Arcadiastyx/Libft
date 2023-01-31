/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inaranjo <inaranjo@student.42lausan>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 16:37:02 by inaranjo          #+#    #+#             */
/*   Updated: 2022/11/05 16:45:35 by inaranjo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst == NULL)
		return ;
	if (lst->content)
	{
		del(lst->content);
		free(lst);
	}
}
/*
lst: L’élément à free
del: L’adresse de la fonction permettant 
de supprimer le contenu de l’élément.
valeur retour : rien
libère la mémoire de l’élément passé en argument
en utilisant la fonction ’del’ puis avec free(3).
La mémoire de ’next’ ne doit pas être free.*/
