/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   second_min_stack.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrouill <atrouill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 20:45:21 by atrouill          #+#    #+#             */
/*   Updated: 2021/05/14 20:49:15 by atrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
** Find the second smallest in stack a
**
** @param stack Chained list representing the stack
**
** @return The second smallest number in stack a
*/
int	second_min_stack_a(t_stack *stack)
{
	t_stack	*tmp;
	int		min_1;
	int		min_2;

	tmp = find_first_set_a(stack);
	min_1 = tmp->a;
	min_2 = min_1;
	while (tmp && tmp->a_set)
	{
		if (tmp->a < min_1)
		{
			min_2 = min_1;
			min_1 = tmp->a;
		}
		else if (tmp->a < min_2)
			min_2 = tmp->a;
	}
	return (min_2);
}
