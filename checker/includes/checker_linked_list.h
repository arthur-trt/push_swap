/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_linked_list.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrouill <atrouill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 16:13:39 by atrouill          #+#    #+#             */
/*   Updated: 2021/03/08 16:37:08 by atrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_LINKED_LIST_H
# define CHECKER_LINKED_LIST_H

# include "checker.h"

t_stack	*fill_stack(int	num, char **input);
void	print_stack(t_stack *stack);

#endif
