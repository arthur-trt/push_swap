/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_structures.h                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrouill <atrouill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 15:15:12 by atrouill          #+#    #+#             */
/*   Updated: 2021/03/08 15:22:01 by atrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_STRUCTURES_H
# define CHECKER_STRUCTURES_H

typedef struct		s_number
{
	int				a;
	int				b;
}					t_number;


typedef struct		s_stack
{
	t_number		*num;
	struct s_stack	*next;
}					t_stack;


#endif
