/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate_b.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrouill <atrouill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 22:43:47 by atrouill          #+#    #+#             */
/*   Updated: 2021/03/09 22:44:27 by atrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

/*
**	Shift down all elements of stack b by 1.
**	The last element becomes the first one.
**
**	@param stack Chained list representing the stack
*/
void	reverse_rotate_b(t_stack **stack)
{
	t_stack	*tmp;
	int		tmp_num;

	#ifdef DEBUG
		printf("\nreverse rotate b\n");
	#endif
	tmp = last_link(*stack);
	if (tmp == NULL)
		return ;
	while (tmp->prev && tmp->b_set)
	{
		tmp_num = tmp->b;
		tmp->b = tmp->prev->b;
		tmp->prev->b = tmp_num;
		tmp = tmp->prev;
	}
	tmp = find_first_set_b(*stack);
	tmp->b = tmp_num;
}
