/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrouill <atrouill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 23:27:21 by atrouill          #+#    #+#             */
/*   Updated: 2021/03/08 23:40:41 by atrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"


void	test_1(t_stack	**stack)
{
	t_stack	*tmp;

	tmp = find_last_unset_b(*stack);
	tmp->b = 12;
	tmp->b_set = true;

	tmp = find_last_unset_b(*stack);
	tmp->b = 8;
	tmp->b_set = true;
}

void	test_2(t_stack **stack)
{
	t_stack *tmp;

	tmp = find_first_set_b(*stack);
	tmp->b = 5;
}
