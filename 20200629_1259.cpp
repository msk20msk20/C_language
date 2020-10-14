#include <stdio.h>

int main(void)
{
    int n, i;
    int num = 0;
    
    scanf("%d", &n);
    
    for (i = 0; i <= n; i++)
    {
    	if(i % 2 == 0)
    	{
    		num = num + i;
		}
	}
    
    printf("%d", num);
    
    return 0;
}
