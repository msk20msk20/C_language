#include <stdio.h>

int main(void)
{
    int n, m, i, j;
    
    scanf("%d %d", &n, &m);
    
    for (i = n; i <= m; i++)
    {
    	for (j = 1; j <= 9; j++)
    	{
    		printf("%d*%d=%d\n", i, j, i*j);
		}
	}
    
    return 0;
}
