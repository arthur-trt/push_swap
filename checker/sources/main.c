/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrouill <atrouill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 15:14:07 by atrouill          #+#    #+#             */
/*   Updated: 2021/03/09 22:44:52 by atrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	main(int argc, char **argv)
{
	t_stack	*stack;

	if (argc == 1)
		return (0);
	stack = fill_stack(argc - 1, ++argv);
	print_stack(stack);
	push_b(&stack);
	push_b(&stack);
	push_b(&stack);
	push_b(&stack);
	push_b(&stack);
//	print_stack(stack);
	push_b(&stack);
	print_stack(stack);
	reverse_rotate_a(&stack);
	reverse_rotate_b(&stack);
	print_stack(stack);
	free_stack(&stack);
	return (0);
}
