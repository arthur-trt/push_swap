/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrouill <atrouill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 12:15:59 by atrouill          #+#    #+#             */
/*   Updated: 2021/03/12 12:05:02 by atrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
**	Shift down all elements of stack a and b by 1.
**	The last element becomes the first one.
**
**	@param stack Chained list representing the stack
*/
void	reverse_rotate(t_stack **stack)
{
	reverse_rotate_a(stack);
	reverse_rotate_b(stack);
}
