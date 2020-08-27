#include <stdio.h>

int main() {
    int    N;
    int    ppred;
    int    pred;
    int    res;
    
    ppred = 0;
    pred = 1;
    res = 1;
    scanf("%d", &N);
    for (N; N > 1; N--)
    {
        res = ppred + pred;
        ppred = pred;
        pred = res;
    }
    printf("%d", res);
    return 0;
}
