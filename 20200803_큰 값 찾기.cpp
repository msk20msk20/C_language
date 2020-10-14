#include <stdio.h>

int main(void)
{
	int a, b;
	
	scanf("%d", &a);
	scanf("%d", &b);
	
	if (a > b)
	{
		printf("max value %d\n", a);
	}
	else
	{
		printf("max value %d\n", b);
	}
	
	return 0;
}
