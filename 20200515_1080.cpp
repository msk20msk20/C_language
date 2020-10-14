#include <stdio.h>

int main(void)
{
	int n;
    int i = 0;
    int sum = 0;
    scanf("%d", &n);
    
    while(1)
    {
        sum = sum + i;
        if(sum >= n)
        {
        	printf("%d", i);
            break;
        }
        i++;
    }
    
    return 0;
}
