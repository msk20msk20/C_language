#include <stdio.h>

int main(void)
{
	int i, j, num;
	int n = 0;
	
    scanf("%d", &num);
    
    for(i=0; i<num; i++)
    {
    	scanf("%d", j);
    	if(j > n)
    	{
    		n = j;
		}
	}
    printf("%d", n);
    return 0;
}
