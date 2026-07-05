#include <unistd.h>
#include <stdio.h>
int	ft_numbersize(int nb)
{
	int	counter;
	int 	aux;

	aux = nb;
	counter = 1;
	while(nb/10 > 0 || nb/10 < 0)
	{
		nb = nb/10;
		counter++;
	}
	nb = aux;
	return (counter);
}

int	ft_is_negative(int nb)
{
	if(nb < 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

void	ft_putnbr(int nb)
{
	char numstr[ft_numbersize(nb)];
	int size;
	int i;
	int aux;
	int negative;

	negative = ft_number(i);
	aux = nb;
	size = ft_numbersize(nb);
	while(nb > 0 || nb < 0)
	{
		numstr[size - 1] = (nb%10) + '0';
		nb = nb/10;
		size --;
	}
	
	i = 0;
	size = ft_numbersize(aux);
	if(ft_is_negative(aux) == 1)
	{
		write(1, "-", 1);
	}

	while(i < size)
	{
		write(1, &numstr[i], 1);
		i++;
	}
}

int	main(void)
{
	ft_putnbr(0);
}
