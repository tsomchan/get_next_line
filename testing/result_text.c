/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   result_text.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomchan <tsomchan@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 15:39:32 by tsomchan          #+#    #+#             */
/*   Updated: 2025/06/01 10:42:11 by tsomchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "myft.h"

void	print_error_text(char *s)
{
	printcolor("| ", "BLU");
	printcolor("ERROR!\n", "YLW");
	if (s && *s != 0)
	{
		printf(" ");
		printcolor(s, "BLK");
	}
}

void	print_result_text(char *s)
{
	printcolor("| ", "BLU");
	printcolor(s, "BLK");
	printcolor(": ", "BLK");
}

void	print_compare_text(char *s)
{
	printcolor("| ", "BLU");
	printcolor(s, "BLK");
}

void	print_test_line(char *s)
{
	printcolor("| ", "BLU");
	printf("%s", s);
}

char	chr_rpc(unsigned int n, char c)
{
	ft_color("BLK");
	printf("Function %s is called\n", __func__);
	ft_color("reset");
	n = c;
	return (n);
}
