/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen_c.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbriffau <mbriffau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/18 21:49:52 by mbriffau          #+#    #+#             */
/*   Updated: 2017/02/18 22:56:46 by mbriffau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen_c(char const *str, char cmp)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == cmp)
			return (i);
		i++;
	}
	return (i);
}
