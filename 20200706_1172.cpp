#include <stdio.h>

int main(void)
{
	int a, b, c;
	int tmp;
	scanf("%d %d %d", &a, &b, &c);
	
	if(b < a)
	{
		tmp = a;
		a = b;
		b = tmp;
	}
	if(c < a)
	{
		tmp = a;
		a = c;
		c = tmp;
	}
	if(c < b)
	{
		tmp = b;
		b = c;
		c = tmp;
	}
	
	printf("%d %d %d", a, b, c);
	
	return 0;
}
