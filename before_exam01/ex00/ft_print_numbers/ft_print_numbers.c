#include <unistd.h>
#include <stdio.h>
void	ft_print_numbers(void)
{	
	char n = '0';
	while (n <= '9')
	{
		write(1, &n, 1);		
		n++;
	}	
}