/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geoffrey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 08:42:39 by geoffrey          #+#    #+#             */
/*   Updated: 2020/11/08 08:49:57 by geoffrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strlen(char* str)
{
	int i;
	i = 0;
	
	while(str[i])
		i++;
	return(i);
}
