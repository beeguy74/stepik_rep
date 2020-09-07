#include <stdio.h>

int main(void)
{
  int a = 0, k_power = 0, i = 1, power = 0;
  int res = 1;

  scanf("%d %d", &a, &k_power);
  power = k_power;
  res = a;
  while(i < power)
  {
    if (k_power != 0 && k_power % 2 == 0 && k_power != 2){
      res = res * res;
      k_power = k_power / 2;
      i = 2 * i;
    }
    else
    {
      res = res * a;
      k_power--;
      i++;
    }    
  }
  printf("%d\n", res);
  return 0;
}
