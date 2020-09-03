#include <stdio.h>

int	main(void)
{
	int	N;
	int	i;

	N = 0;
	scanf("%d", &N);
	i = (N == 0)? 0 : 1;
	while (N >= 10)
	{
		N = N /10;
		i++;
	}
	printf ("%d", i);
	return (0);
}
