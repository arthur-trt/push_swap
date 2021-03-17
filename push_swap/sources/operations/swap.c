/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrouill <atrouill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 19:34:10 by atrouill          #+#    #+#             */
/*   Updated: 2021/03/12 12:05:16 by atrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
**	Swap the two first element of stack a and b
**
**	@param stack Chained list representing the stack
*/
void	swap(t_stack **stack)
{
	swap_a(stack);
	swap_b(stack);
}
