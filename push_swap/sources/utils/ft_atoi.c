/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrouill <atrouill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 15:37:17 by atrouill          #+#    #+#             */
/*   Updated: 2021/03/25 11:55:31 by atrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "push_swap.h"

static char	*ft_clean_str(const char *str)
{
	int		i;

	i = 0;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\r' ||
			str[i] == '\v' || str[i] == '\f' || str[i] == ' ')
		i++;
	return ((char *)(str + i));
}

/*
**	Convert a string to an int respresentation
**
**	@param str String to convert
**
**	@return int representation of the string
*/
int			ft_atoi(const char *str)
{
	int				neg;
	int				i;
	long long		res;
	char			*clean_str;

	neg = 1;
	i = 0;
	res = 0;
	clean_str = ft_clean_str(str);
	if (clean_str[0] == '-')
	{
		i++;
		neg = -1;
	}
	if (clean_str[0] == '+')
		i++;
	while (clean_str[i] >= 48 && clean_str[i] <= 57)
	{
		res = (res * 10) + (clean_str[i] - 48);
		if (res > INT_MAX || (neg * res) < INT_MIN)
		{
			errno = ERANGE;
			return (1);
		}
		i++;
	}
	return ((int)(neg * res));
}
