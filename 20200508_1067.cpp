#include <stdio.h>

int main(void)
{
	int a;
	scanf("%d", &a);
	
	if(a > 0)
	{
		printf("plus \n");
		if(a % 2 == 0)
		{
			printf("even");
		}
		else if(a % 2 == 1)
		{
			printf("odd");
		}
	}
	else if(a < 0)
	{
		printf("minus \n");
		if(a % 2 == 0)
		{
			printf("even");
		}
		else
		{
			printf("odd");
		}
	}
	
	return 0;
}
