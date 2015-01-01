/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmangili <rmangili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/02 00:13:35 by rmangili          #+#    #+#             */
/*   Updated: 2015/01/02 00:13:41 by rmangili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void					*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char		*buf;
	size_t				i;

	i = 0;
	buf = (unsigned char *)s;
	if (buf && i < n)
	{
		while (i < n && buf[i] != (unsigned char)c)
			++i;
		if (i < n && buf[i] == (unsigned char)c)
			return ((void *)buf + i);
	}
	return (NULL);
}
