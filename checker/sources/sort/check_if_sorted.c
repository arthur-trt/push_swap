/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_if_sorted.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrouill <atrouill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 12:10:01 by atrouill          #+#    #+#             */
/*   Updated: 2021/03/11 12:15:55 by atrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

/*
**	Checks if the stack a is sorted in ascending order
**
**	@param stack Chained list representing the stack
**
**	@return true if sorted / false if not
*/
bool	check_if_sorted(t_stack *stack)
{
	t_stack	*tmp;

	tmp = stack;
	while (tmp->next)
	{
		if (tmp->a > tmp->next->a)
			return (false);
		tmp = tmp->next;
	}
	return (true);
}
