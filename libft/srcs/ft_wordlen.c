/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wordlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbriffau <mbriffau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/07 18:34:56 by mbriffau          #+#    #+#             */
/*   Updated: 2016/12/07 18:40:57 by mbriffau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_wordlen(const char *s, char c)
{
	int		l;

	l = 0;
	while (*s != c && *s != '\0')
	{
		l++;
		s++;
	}
	return (l);
}
