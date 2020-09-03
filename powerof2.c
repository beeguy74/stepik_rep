#include <stdio.h>

int	main (void)
{
    int    num;
    int    res;
    
    num = 0;
    res = 1;
    scanf("%d", &num);
    while(res <= num)
    {
        if (res == num)
        {
            printf("YES");
            return 0;
        }
        res *= 2;
    }
    printf("NO");
    return 0;
}
