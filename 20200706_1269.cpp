#include <stdio.h>

int main(void)
{
	int a, b, c, n, i;
	
	scanf("%d %d %d %d", &a, &b, &c, &n);
	
	for(i = 1; i < n; i++)
	{
		a = a * b + c;
	}
	
	printf("%d", a);
}
