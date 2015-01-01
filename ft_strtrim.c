/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmangili <rmangili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/02 00:17:38 by rmangili          #+#    #+#             */
/*   Updated: 2015/01/02 00:17:40 by rmangili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strtrim(char const *s)
{
	size_t		start;
	int			i;
	int			len;

	start = 0;
	i = 0;
	if (s)
	{
		len = ft_strlen(s);
		while (i >= 0 && ft_isspace(s[i]))
		{
			len--;
			i++;
		}
		while (s[start] && ft_isspace(s[start]))
			start++;
		len -= start;
		if (len < 0)
			return (ft_strdup(""));
		return (ft_strsub(s, start, len));
	}
	return (0);
}
