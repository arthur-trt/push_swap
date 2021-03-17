/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrouill <atrouill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 15:14:31 by atrouill          #+#    #+#             */
/*   Updated: 2021/03/12 12:05:10 by atrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static bool	check_two_a_set(t_stack *stack)
{
	t_stack	*tmp;
	int		set;

	tmp = find_first_set_a(stack);
	set = 0;
	while (tmp && tmp->a_set)
	{
		set++;
		if (set >= 2)
			return (true);
		tmp = tmp->next;
	}
	return (false);
}

/*
**	Swap the two first element of stack a
**
**	@param stack Chained list representing the stack
*/
void	swap_a(t_stack **stack)
{
	int	tmp;
	t_stack	*first_a;

	#ifdef DEBUG
		printf("\nswap a\n");
	#endif
	if (*stack && check_two_a_set(*stack))
	{
		first_a = find_first_set_a(*stack);
		tmp = first_a->next->a;
		first_a->next->a = first_a->a;
		first_a->a = tmp;
	}
}
