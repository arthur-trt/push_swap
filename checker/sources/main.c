/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrouill <atrouill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 15:14:07 by atrouill          #+#    #+#             */
/*   Updated: 2021/03/18 12:09:47 by atrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

/*
static void	unknow_operation(t_stack **stack)
{
	free_stack(stack);
	printf("Unknow operations\n");
	exit(EXIT_FAILURE);
}
*/

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

int			main(int argc, char **argv)
{
	t_stack	*stack;
	char	*input;
	int		ret;

	init(argc - 1, ++argv, &stack);
	print_stack(stack);
	ret = 1;
	while (ret > 0)
	{
		ret = get_next_line(0, &input);
		printf("ret : %d\n", ret);
		if (ret > 0 && call_operations(input, &stack) == false)
		{
			printf("Unknow operations\n");
			ret = 0;
		}
		free(input);
	}
	print_stack(stack);
	printf("Sorted : %d\n", check_if_sorted(stack));
	free_stack(&stack);
	system("leaks checker");
	return (EXIT_SUCCESS);
}
