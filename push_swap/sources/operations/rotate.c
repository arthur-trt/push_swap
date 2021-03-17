/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrouill <atrouill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 11:46:07 by atrouill          #+#    #+#             */
/*   Updated: 2021/03/12 12:05:08 by atrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
**	Shift up all elements of stack a and b by 1.
**	The first element becomes the last one.
**
**	@param stack Chained list representing the stack
*/
void	rotate(t_stack **stack)
{
	rotate_a(stack);
	rotate_b(stack);
}
