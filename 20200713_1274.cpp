#include <stdio.h>

int main(void)
{
	int a, i, n = 0;
	
	scanf("%d", &a);
	
	for (i = 1; i <= a; i++)
	{
		if(a % i == 0)
		{
			n++;
		}
	}
	
	if(n == 2)
	{
		printf("prime");
	}
	else
	{
		printf("not prime");
	}
	
	return 0;
}
