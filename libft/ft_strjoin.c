/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strjoin.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jandre-d <jandre-d@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/10 12:41:18 by jandre-d       #+#    #+#                */
/*   Updated: 2019/01/16 12:15:37 by jandre-d      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	l1;
	size_t	l2;
	char	*to_return;

	l1 = ft_strlen(s1);
	l2 = ft_strlen(s2);
	to_return = malloc(l1 + l2 + 1);
	if (to_return != NULL)
	{
		ft_strcpy(to_return, s1);
		ft_strcpy(to_return + l1, s2);
	}
	return (to_return);
}
