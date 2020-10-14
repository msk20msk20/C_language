#include <stdio.h>

int main(void)
{
	int a;
	scanf("%d", &a);
	
	if(a > 89)
	{
		printf("A \n");
	}
	else if(a > 69)
	{
		printf("B \n");
	}
	else if(a > 39)
	{
		printf("C \n");
	}
	else
	{
		printf("D \n");
	}
	
	return 0;
}
