#include <stdio.h>

int main(void)
{
    int n, m, i;
    
    scanf("%d %d %d", &n, &m, &i);
    
    printf("%d", n);
    
    if(m < 10)
    {
        printf("0");
        printf("%d", m);
    }
    else
    {
        printf("%d", m);
    }
    
    if(i < 100)
    {
        if(i < 10)
    	{
        	printf("00");
        	printf("%d", i);
    	}
    	else
    	{
    		printf("0");
        	printf("%d", i);
    	}
    }
    else
    {
        printf("%d", i);
    }
    
    return 0;
}
