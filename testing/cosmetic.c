/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cosmetic.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomchan <tsomchan@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 14:57:55 by tsomchan          #+#    #+#             */
/*   Updated: 2025/06/01 10:43:09 by tsomchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <libc.h>
#include "../testing/myft.h"

void	banner_border(int len)
{
	int	i;

	ft_color("BLU");
	printf("o");
	i = len + 2;
	while (--i >= 0)
		printf("-");
	printf("o\n");
	ft_color("reset");
}

void	banner(char *str, char *desc)
{
	int	len;
	int	i;

	i = -1;
	if (*desc == 0)
		len = strlen(str);
	else
		len = strlen(str) + strlen(desc) + 3;
	banner_border(len);
	printcolor("|", "BLU");
	ft_color("WHT");
	printf(" %s ", str);
	printcolor("| ", "BLU");
	if (*desc != 0)
	{
		printcolor(desc, "BLK");
		printcolor(" |", "BLU");
	}
	printf("\n");
	banner_border(len);
}

void	divider_start(void)
{
	printf("");
}

void	divider_end(void)
{
	ft_color("BLU");
	printf("o-------------------------------------- --- -- -\n");
	ft_color("reset");
}

void	program_header(void)
{
	ft_color("PUR");
	printf("o-------------------------------------- --- -- -\n");
	printf("o------------------------------- -- --- -\n");
	printf("o------------------------ --- -- -\n");
	printf("o----------------- -- -- -- -\n");
	ft_color("reset");
}
