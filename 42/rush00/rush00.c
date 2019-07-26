/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/14 13:05:32 by jleng             #+#    #+#             */
/*   Updated: 2019/07/14 16:20:38 by jleng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int putchar(char c)
{
	write(1, &c, 1);
	return (0);
}
int firstline(int bx)
{
	putchar('o');
	if (bx > 1)
	{
		int i;

		i = 0;
		while (i < bx - 2)
		{
			putchar('-');
			i++; 
		}
		putchar('o');
		putchar('\n');
		return (0);
	}
	else
	{
		putchar('\n');
		return(0);
	}
}
void	middleline(int bx, int by)
{
	int z;
	int x;
	z = by - 2;
	if (bx > 1) 
	{
	while (z > 0) 
	{	
		x = 0; 
		putchar('|');
		while (x < bx -2) 
		{
			putchar(' ');
			x++;
		}
		putchar('|');
		putchar('\n');
		z--;
	}
	}
	else
	{
		putchar('|');
		putchar('\n');
	}
}
int lastline(int bx)
{
	putchar('o');

	if (bx > 1)
	{
		int i;

		i = 0;
		while (i < bx - 2)
		{
			putchar('-');
			i++; 
		}
	putchar('o');
	putchar('\n');
	return (0);
	}
	else 
	{
		return(0);
	}
}

int rush(int bx, int by)
{
	if (bx > 0 && by > 0)
	{
		firstline(bx);
		if (by > 2)
		{
			middleline(bx, by);
		}
		lastline(bx);
	}

	return (0);
}
int main (void)
{
	rush(1,1);
	rush(1,10);
	return (0);
}

