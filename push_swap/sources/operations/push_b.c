/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrouill <atrouill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 23:42:54 by atrouill          #+#    #+#             */
/*   Updated: 2021/03/12 12:04:54 by atrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
**	Take the first elem of stack a and put it on top of stack b
**
**	@param stack Chained list representing the stack
*/
void	push_b(t_stack **stack)
{
	t_stack	*tmp_a;
	t_stack	*tmp_b;

	#ifdef DEBUG
		printf("\npush b\n");
	#endif
	tmp_a = find_first_set_a(*stack);
	tmp_b = find_last_unset_b(*stack);
	if (tmp_a == NULL || tmp_b == NULL)
		return ;
	tmp_b->b = tmp_a->a;
	tmp_a->a_set = false;
	tmp_b->b_set = true;
}
