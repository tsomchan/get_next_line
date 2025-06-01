/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomchan <tsomchan@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 15:41:26 by tsomchan          #+#    #+#             */
/*   Updated: 2025/06/01 10:43:09 by tsomchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../get_next_line.h"
#include "../get_next_line_bonus.h"
#include "../testing/myft.h"

static int	g_count = 1;

void	output_chars(char *test, char *str)
{
	printf("%s\t= \"", test);
	if (str)
		print_chars(str);
	else
		printf("(null)");
	printf("\"\n");
}

void	print_chars(char *str)
{
	while (*str)
	{
		if (*str == '\n')
			printf("\\n");
		else
			printf("%c", *str);
		str++;
	}
}

void	print_line(char *str)
{
	// printf("[%d] next line is --> \"", g_count++);
	printcolor("[", "BLU");
	ft_color("WHT");
	printf("%d", g_count++);
	ft_color("reset");	
	printcolor("] ", "BLU");
	if (g_count <= 10)
		printf(" ");
	printcolor("next line is --> \"", "BLK");
	ft_color("WHT");
	print_chars(str);
	ft_color("reset");
	// if (!check_newline(str))
	// 	printcolor("\" (no '\\n')\n", "BLK");
	// else
	printcolor("\"\n", "BLK");
}

void	test_gnl(char *test)
{
	int			fd;
	char		*ptr;

	g_count = 1;
	printcolor("/////////////////////////////////////////\n", "BLU");
	ft_color("BLK");
	printf("test file\t= %s\n", test);
	ft_color("reset");
	fd = open(test, O_RDONLY);
	ptr = get_next_line(fd);
	while (ptr)
	{
		print_line(ptr);
		free(ptr);
		ptr = get_next_line(fd);
	}
	free(ptr);
	printcolor("-----------------------------------------\n", "PUR");
}

void	test_gnl_n(char *test, int n)
{
	int			fd;
	char		*ptr;

	g_count = 1;
	printcolor("/////////////////////////////////////////\n", "BLU");
	ft_color("BLK");
	printf("test file\t= %s\n", test);
	ft_color("reset");
	fd = open(test, O_RDONLY);
	ptr = get_next_line(fd);
	while (n-- && ptr)
	{
		print_line(ptr);
		free(ptr);
		ptr = get_next_line(fd);
	}
	if (!ptr)
	{
		printcolor("[", "BLU");
		ft_color("WHT");	
		printf("%d", g_count++);
		ft_color("reset");	
		printcolor("] ", "BLU");
		printcolor("no more next line\n", "BLK");
	}
	free(ptr);
	printcolor("-----------------------------------------\n", "PUR");
}

int	main(void)
{
	char	*ptr;
	int		fd1 = open("txt/multiple_nl.txt", O_RDONLY);
	int		fd2 = open("txt/text.txt", O_RDONLY);
	int		fd3 = open("txt/variable_nls.txt", O_RDONLY);

	printf("BUFFER_SIZE\t= %d\n", BUFFER_SIZE);
	ptr = get_next_line(fd1); print_line(ptr); free(ptr);
	ptr = get_next_line(fd2); print_line(ptr); free(ptr);
	ptr = get_next_line(fd3); print_line(ptr); free(ptr);
	ptr = get_next_line(fd2); print_line(ptr); free(ptr);
	ptr = get_next_line(fd3); print_line(ptr); free(ptr);
	ptr = get_next_line(fd3); print_line(ptr); free(ptr);
	ptr = get_next_line(fd3); print_line(ptr); free(ptr);
	ptr = get_next_line(fd3); print_line(ptr); free(ptr);
	ptr = get_next_line(fd3); print_line(ptr); free(ptr);
	ptr = get_next_line(fd1); print_line(ptr); free(ptr);
	ptr = get_next_line(fd1); print_line(ptr); free(ptr);
	ptr = get_next_line(fd1); print_line(ptr); free(ptr);
	ptr = get_next_line(fd3); print_line(ptr); free(ptr);
	ptr = get_next_line(fd3); print_line(ptr); free(ptr);
	ptr = get_next_line(fd3); print_line(ptr); free(ptr);
	ptr = get_next_line(fd3); print_line(ptr); free(ptr);
	return (0);
}

/*
	fd = open("multiple_nl.txt",O_RDONLY);
	fd = open("only_nl.txt",O_RDONLY);
	fd = open("text",O_RDONLY);
	fd = open("lines_around_10.txt",O_RDONLY);
*/
/*
	ptr = get_next_line(fd);
	while (ptr)
	{
		print_line(ptr);
		free(ptr);
		ptr = get_next_line(fd);
	}
*/
/*
	ptr = get_next_line(fd);
	print_line(ptr);
	free(ptr);
	ptr = get_next_line(fd);
	print_line(ptr);
	free(ptr);
*/
	/*
		ptr = get_next_line(fd);
		printf("initial ptr\t=%s",ptr);
		printf("----------------------\n");
		free(ptr);
	*/