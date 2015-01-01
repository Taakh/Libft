/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmangili <rmangili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/02 00:14:28 by rmangili          #+#    #+#             */
/*   Updated: 2015/01/02 00:14:33 by rmangili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			ft_putendl_fd(char const *s, int fd)
{
	if (s != NULL)
		ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}
