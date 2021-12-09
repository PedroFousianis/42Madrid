void	ft_swap(int *a, int *b);

void	ft_swap(int *a, int *b)
{
	int		c;
	c = *a;
	*a = *b;
	b = &c;
}

/*int main()
{	
	int c;
	int d;
	int *a;
	int *b;

	a = &c;
	b = &d;

	ft_swap(a, b);
}*/