/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_structures.h                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrouill <atrouill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 15:15:12 by atrouill          #+#    #+#             */
/*   Updated: 2021/03/12 11:58:34 by atrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_STRUCTURES_H
# define PUSH_SWAP_STRUCTURES_H

#include <stdbool.h>

typedef struct		s_number
{
	int				*a;
	int				*b;
}					t_number;


typedef struct		s_stack
{
	bool			a_set;
	int				a;
	bool			b_set;
	int				b;
	struct s_stack	*next;
	struct s_stack	*prev;
}					t_stack;


#endif
