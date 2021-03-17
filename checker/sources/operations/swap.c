/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrouill <atrouill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 19:34:10 by atrouill          #+#    #+#             */
/*   Updated: 2021/03/11 14:41:19 by atrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

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
