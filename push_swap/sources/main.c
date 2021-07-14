/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrouill <atrouill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 09:31:55 by atrouill          #+#    #+#             */
/*   Updated: 2021/05/14 20:51:08 by atrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	init(int arg_num, char **numbers, t_stack **stack)
{
	if (arg_num == 1)
		exit(EXIT_FAILURE);
	if ((*stack = fill_stack(arg_num, numbers)) == NULL)
	{
		printf("Error\n");
		exit(EXIT_FAILURE);
	}
}

int	main(int argc, char **argv)
{
	t_stack	*stack;

	init(argc - 1, ++argv, &stack);
	#ifdef DEBUG
		print_stack(stack);
	#endif
	if (argc - 1 < 6)
		sort_small(stack, argc - 1);
	#ifdef DEBUG
		print_stack(stack);
	#endif
	free_stack(&stack);
}
