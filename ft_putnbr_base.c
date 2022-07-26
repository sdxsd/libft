#include "libft.h"

void	ft_putnbr_base(int n, int base)
{
	long	nb;

	nb = n;
	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	if (nb < base)
	{
		if (base > 10 && nb > 10)
			ft_putchar(nb + 'A' - 10);
		else
			ft_putchar(nb + '0');
		return ;
	}
	ft_putnbr_base(nb / base, base);
	ft_putnbr_base(nb % base, base);
}
