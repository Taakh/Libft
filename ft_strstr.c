/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmangili <rmangili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/02 00:17:20 by rmangili          #+#    #+#             */
/*   Updated: 2015/01/02 00:17:22 by rmangili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	char	*str;
	size_t	len;

	str = (char *)s1;
	len = ft_strlen(s2);
	if (*str == 0)
		return (str);
	while (*str)
	{
		if (ft_strncmp(str, s2, len) == 0)
			return (str);
		str++;
	}
	return (NULL);
}
