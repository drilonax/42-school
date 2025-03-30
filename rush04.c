/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalhanaw <kalhanaw@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 13:14:32 by kalhanaw          #+#    #+#             */
/*   Updated: 2025/03/30 13:15:12 by kalhanaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	first_row(int x)
{
	int	column;

	column = 0;
	while (column < x)
	{
		if (column == 0)
			ft_putchar('A');
		else if (column == x - 1)
			ft_putchar('C');
		else
			ft_putchar('B');
		column++;
	}
	ft_putchar('\n');
}

void	last_row(int x)
{
	int	column;

	column = 0;
	while (column < x)
	{
		if (column == 0)
			ft_putchar('C');
		else if (column == x - 1)
			ft_putchar('A');
		else
			ft_putchar('B');
		column++;
	}
	ft_putchar('\n');
}

void	middle_rows(int x)
{
	int	column;

	ft_putchar('B');
	column = 1;
	while (column < x - 1)
	{
		ft_putchar(' ');
		column++;
	}
	if (x > 1)
		ft_putchar('B');
	ft_putchar('\n');
}

void	show_error(void)
{
	write(1, "error \n", 7);
}

void	rush(int x, int y)
{
	int	row;
	int	limit;

	limit = 2147483647;
	if (x <= 0 || y <= 0 || x > limit || y > limit)
	{
		show_error();
		return ;
	}
	row = 0;
	while (row < y)
	{
		if (row == 0)
			first_row(x);
		else if (row == y - 1)
			last_row(x);
		else
			middle_rows(x);
		row++;
	}
}
