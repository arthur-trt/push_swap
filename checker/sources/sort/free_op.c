/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_op.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrouill <atrouill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 15:06:33 by atrouill          #+#    #+#             */
/*   Updated: 2021/03/27 15:08:52 by atrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

/*
**	Free the operation chained list
**
**	@param op Chained list to free
*/
void	free_op(t_op **op)
{
	t_op	*tmp;
	t_op	*next;

	if (*op)
	{
		tmp = *op;
		while (tmp)
		{
			next = tmp->next;
			free(tmp->operations);
			free(tmp);
			tmp = next;
		}
		*op = NULL;
	}
}
