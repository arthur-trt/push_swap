/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate_a.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrouill <atrouill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 11:49:33 by atrouill          #+#    #+#             */
/*   Updated: 2021/03/09 22:43:28 by atrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

/*
**	Shift down all elements of stack a by 1.
**	The last element becomes the first one.
**
**	@param stack Chained list representing the stack
*/
void	reverse_rotate_a(t_stack **stack)
{
	t_stack	*tmp;
	int		tmp_num;

	#ifdef DEBUG
		printf("\nreverse rotate a\n");
	#endif
	tmp = last_link(*stack);
	if (tmp == NULL)
		return ;
	while (tmp->prev && tmp->a_set)
	{
		tmp_num = tmp->a;
		tmp->a = tmp->prev->a;
		tmp->prev->a = tmp_num;
		tmp = tmp->prev;
	}
	tmp = find_first_set_a(*stack);
	tmp->a = tmp_num;
}
