/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmangili <rmangili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/02 00:16:33 by rmangili          #+#    #+#             */
/*   Updated: 2015/01/02 00:16:35 by rmangili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strjoin(char const *s1, char const *s2)
{
	size_t		len;
	char		*p;

	if (s1 && s2)
	{
		len = ft_strlen(s1) + ft_strlen(s2);
		p = ft_strnew(len);
		p = ft_strdup(s1);
		p = ft_strcat(p, s2);
		return (p);
	}
	else if (s2)
		return (ft_strdup(s2));
	else if (s1)
		return (ft_strdup(s1));
	else
		return (0);
}
