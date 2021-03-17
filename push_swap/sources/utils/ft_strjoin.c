/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrouill <atrouill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 13:17:56 by atrouill          #+#    #+#             */
/*   Updated: 2021/03/12 12:05:39 by atrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
**	Join two string together
**
**	@param s1 First string. Result will be stored at the same location
**	@param s2 Second to string, will be added to s1
**
**	@return Pointer to result (same as s1)
*/
char		*ft_strjoin(char **s1, char *s2)
{
	char	*res;
	size_t	len;
	size_t	i;
	size_t	j;

	len = ft_strlen(*s1) + ft_strlen(s2);
	if (!(res = malloc(sizeof(char) * (len + 1))))
		return (NULL);
	i = 0;
	j = 0;
	while (*s1 && (*s1)[i] != '\0')
	{
		res[j++] = (*s1)[i];
		i++;
	}
	i = 0;
	while (s2 && s2[i] != '\0')
	{
		res[j++] = s2[i];
		i++;
	}
	free(*s1);
	res[j] = '\0';
	*s1 = res;
	return (res);
}
