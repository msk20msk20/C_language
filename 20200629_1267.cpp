#include <stdio.h>

int main(void)
{
    int n, i, m, a=0;
    
    scanf("%d", &n);
    
    for (i = 1; i <= n; i++)
    {
    	scanf("%d", &m);
        if(m % 5 == 0)
        {
            a = a + m;
        }
	}
	printf("%d", a);
	
    
    return 0;
}
