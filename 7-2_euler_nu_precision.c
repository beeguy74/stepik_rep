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
	double 		p;
	double 		fac;
	int			i;

	e = 1.;
	i = 1;
	p = 0.;
	fac = 1. / ft_fac(i);
	scanf("%lf", &p);
	while (fac >= p)
	{
		fac = 1. / ft_fac(i);
		e = e + fac;
		i++;
	}
	printf("%.8lf", e);
	return (0);
}
