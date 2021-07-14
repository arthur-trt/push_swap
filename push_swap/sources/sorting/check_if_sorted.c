/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_if_sorted.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrouill <atrouill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 15:12:26 by atrouill          #+#    #+#             */
/*   Updated: 2021/05/14 19:47:56 by atrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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

	tmp = find_first_set_a(stack);
	while (tmp->next)
	{
		if (tmp->a > tmp->next->a)
			return (false);
		tmp = tmp->next;
	}
	return (true);
}
