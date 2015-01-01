/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmangili <rmangili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/02 00:12:37 by rmangili          #+#    #+#             */
/*   Updated: 2015/01/02 00:12:56 by rmangili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_isspace(int c)
{
		return (c == '\t' || c == '\n' || c == '\v' || c == '\f' || c == '\r' || \
					c == ' ');
}
