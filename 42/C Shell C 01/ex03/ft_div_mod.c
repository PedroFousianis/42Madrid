#include <stdio.h>
void	ft_div_mod(int a, int b, int *div, int *mod);

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	int var;

	*div = a / b;
	*mod = a % b;
}

