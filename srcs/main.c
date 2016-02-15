/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/02 16:32:46 by acazuc            #+#    #+#             */
/*   Updated: 2016/02/15 15:59:49 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "malloc.h"
#include <stdio.h>

int		main(void)
{
	char	*str1;
	char	*str2;

	if (!(str1 = malloc(sizeof(*str1) * 2)))
	{
		ft_putendl("Failed to malloc str1");
		exit(1);
	}
	str1[0] = '1';
	str1[1] = '\0';
	if (!(str2 = malloc(sizeof(*str2) * 2)))
	{
		ft_putendl("Failed to malloc str2");
		exit(1);
	}
	str2[0] = '2';
	str2[1] = '\0';
	printf("%s\n", str1);
   	printf("%s\n", str2);
	return (0);
}
