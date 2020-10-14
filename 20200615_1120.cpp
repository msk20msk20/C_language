#include <stdio.h>

int main(void)
{
    int a, b, c;
    double n, m;
    
    scanf("%d %d %d", &a, &b, &c);
    n = a + b + c;
    m = n/3;
    printf("%.2lf", m);
    
    return 0;
}
