/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrouill <atrouill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 15:14:43 by atrouill          #+#    #+#             */
/*   Updated: 2021/03/10 12:19:08 by atrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>

# include "checker_structures.h"
# include "checker_utils.h"
# include "checker_stack.h"
# include "checker_operations.h"

/*
** TEST
*/
void	test_1(t_stack	**stack);
void	test_2(t_stack **stack);

#endif
