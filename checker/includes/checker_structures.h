/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_structures.h                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrouill <atrouill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 15:15:12 by atrouill          #+#    #+#             */
/*   Updated: 2021/03/08 19:02:30 by atrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_STRUCTURES_H
# define CHECKER_STRUCTURES_H

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
}					t_stack;


#endif
