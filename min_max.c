#include <stdio.h>

int main()
{
    int    num;
    int    min;
    int    max;
    
    num = 0;
    max = 0;
    min = 0;
    scanf("%d", &num);
    while (num != 0)
    {
        max = ((num > max && num > min) || max == 0)? num : max;
        min = ((num < min && num < max) || min == 0)? num : min;
        scanf("%d", &num);
    }
    if (max != 0)
	    printf("%d %d", max, min);    
    return 0;
}
