/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrouill <atrouill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 12:00:18 by atrouill          #+#    #+#             */
/*   Updated: 2021/03/18 15:08:09 by atrouill         ###   ########.fr       */
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
# include "push_swap_utils.h"
# include "push_swap_stack.h"
# include "push_swap_operations.h"

/*
** TEST
*/
void	test_1(t_stack	**stack);
void	test_2(t_stack **stack);

#endif
