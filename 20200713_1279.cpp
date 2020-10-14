#include <stdio.h>

int main(void)
{
	int a, b, i, n = 0;
	
	scanf("%d %d", &a, &b);
	
	for (i = a; i <= b; i++)
	{
		if(i % 2 == 0)
		{
			n = n + -i;
		}
		else
		{
			n = n + i;
		}
	
	}
	
	printf("%d", n);
	
	return 0;
}
