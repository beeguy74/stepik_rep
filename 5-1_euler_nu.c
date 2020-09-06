#include <stdio.h>

int	ft_fac(int N)
{
	int	i;
	int	res;

	i = 1;
	res = 1;
	while (i <= N)
	{
		res *= i;
		i++;
	}
	return (res);
}

int	main(void)
{
	double		e;
	int			i;
	int			N;

	e = 1.;
	i = 1;
//	N = 1;
//	scanf("%d", &N);
	N = 6;
	while (i < N)
	{
		e = e + 1. / ft_fac(i);
		i++;
		if (i > 3)
			printf("%.5f\n", e);
	}
	return (0);
}
