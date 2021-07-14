/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exec_operations.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrouill <atrouill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 14:53:18 by atrouill          #+#    #+#             */
/*   Updated: 2021/03/27 15:03:56 by atrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

/*
**	Exec all operation in chained list
**
**	@param op Chained list of all operation enter by the user
**	@param stack Stack representation in chained list
**
**	@return false if an unknow operation occurs, else otherwise
*/
bool	exec_operations(t_op *op, t_stack **stack)
{
	t_op	*tmp;

	tmp = op;
	while(tmp)
	{
		if(call_operations(op->operations, stack) == false)
			return (false);
		tmp = tmp->next;
	}
	return (true);
}
