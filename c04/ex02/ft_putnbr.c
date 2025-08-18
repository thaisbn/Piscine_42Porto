/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thaberna <thaberna@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 20:58:07 by thaberna          #+#    #+#             */
/*   Updated: 2025/08/02 15:37:37 by thaberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> 

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putstr(char *str)
{
	while(*str)
	{
		ft_putchar(*str);
		str++;
	}
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		if (nb == -2147483648)
		{
			ft_putstr("2147483648");
			return;
		}
		nb = -nb;
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
	}
	ft_putchar(nb % 10 + 48);
	
}

int main(void)
{
	ft_putnbr(42); // 42
	ft_putchar('\n');
	ft_putnbr(-12345); // -12345
	ft_putchar('\n');
	ft_putnbr(-2147483648); // -2147483648
	ft_putchar('\n');
	return (0);
}
