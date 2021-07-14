/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrouill <atrouill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 14:11:28 by atrouill          #+#    #+#             */
/*   Updated: 2021/05/14 20:50:57 by atrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	sort_two(t_stack **stack)
{
	swap_a(stack);
}

static void	sort_three(t_stack **stack)
{
	int	tmp_a;
	int	tmp_b;
	int	tmp_c;
	t_stack *tmp;

	if (check_if_sorted(*stack))
		return ;
	tmp = find_first_set_a(*stack);
	tmp_a = tmp->a;
	tmp_b = tmp->next->a;
	tmp_c = tmp->next->next->a;
	if (tmp_a < tmp_b && tmp_a < tmp_c)
	{
		reverse_rotate_a(stack);
		swap_a(stack);
	}
	else if (tmp_b < tmp_a && tmp_b < tmp_c && tmp_a < tmp_c)
		swap_a(stack);
	else if (tmp_b < tmp_a && tmp_b < tmp_c && tmp_a > tmp_c)
		rotate_a(stack);
	else if (tmp_a < tmp_b)
		reverse_rotate_a(stack);
	else
	{
		swap_a(stack);
		reverse_rotate_a(stack);
	}
}

static void sort_four(t_stack **stack)
{
	int	min;
	int i;

	i = 0;
	min = min_stack_a(*stack);
	while (i < 4)
	{
		if ((*stack)->a_set && (*stack)->a == min)
			push_b(stack);
		else
			rotate_a(stack);
		i++;
	}
	sort_three(stack);
	push_a(stack);
}

static void sort_five(t_stack **stack)
{
	int	min;
	int i;

	i = 0;
	min = min_stack_a(*stack);
	while (i < 4)
	{
		if ((*stack)->a_set && (*stack)->a == min)
			push_b(stack);
		else
			rotate_a(stack);
		i++;
	}
	sort_four(stack);
	push_a(stack);
}

void	sort_small(t_stack *stack, int len)
{
	if (len == 1 || check_if_sorted(stack))
		return ;
	else if (len == 2)
		sort_two(&stack);
	else if (len == 3)
		sort_three(&stack);
	else if (len == 4)
		sort_four(&stack);
	else if (len == 5)
		sort_five(&stack);
}
