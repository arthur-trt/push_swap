/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrouill <atrouill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 12:00:18 by atrouill          #+#    #+#             */
/*   Updated: 2021/03/13 11:25:50 by atrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <errno.h>
# include <limits.h>

# include "push_swap_structures.h"
# include "checker_utils.h"
# include "push_swap_stack.h"
# include "push_swap_operations.h"
# include "checker_sort.h"
# include "checker_gnl.h"
# include "checker_input.h"

/*
** TEST
*/
void	test_1(t_stack	**stack);
void	test_2(t_stack **stack);

#endif
