#include <stdio.h>

int main(void)
{
	int n, i, j, a;
	
	scanf("%d", &n);
	
	for(i = 1; i <= n; i++)
	{
		for(j = 1; j <= n; j++)
		{
			if(j < i)
			{
				printf(" ");
			}
			else
			{
				printf("*");
			}
		}
		printf("\n");
	}
	
	return 0;
}
