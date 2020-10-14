#include <stdio.h>

int main(void)
{
    int a, i, j, n, m;
    
    scanf("%d", &a);
    
    for (i = 1; i <= a; i++)
    {
    	for (j = 1; j <= i; j++)
    	{
    		printf("*");
		}
		printf("\n");
	}
	
	for(n = a - 1; n >= 1; n--)
	{
		for(m = 1; m <= n; m++)
		{
			printf("*");
		}
		printf("\n");
	}
    
    return 0;
}
