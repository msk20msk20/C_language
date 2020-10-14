#include <stdio.h>

int main(void)
{
	int array[100] = {};
	int n, i, j, k;
	
    scanf("%d", &n);
    
    for(i = 0; i < n; i++)
    {
    	scanf("%d", &array[i]);
	}
	for(j = 0; j < 2; j++)
    {
    	for(k = 0; k < n; k++)
    	{	
    		printf("%d \n", array[k]);
		}
	}
    return 0;
}
