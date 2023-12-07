/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-auria <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 15:37:43 by gd-auria          #+#    #+#             */
/*   Updated: 2023/12/07 15:49:31 by gd-auria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_strleng(char *str)
{
	int 	n:
	
	n = 0;
	while (str[n])
	n++;
	return (n);
}

void	ft_putstr(char *str)
{
	write(1, str, ft_strleng(str));
}
