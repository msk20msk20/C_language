#include <stdio.h>

int main(void)
{
	int a, i, n = 0;
	
	scanf("%d", &a);
	n = a;
	
	for (i = a - 1; i > 0; i--)
	{
		n = n * i;
	}
	
	printf("%d", n);
	
	return 0;
}
