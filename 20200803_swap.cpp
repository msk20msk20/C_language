#include <stdio.h>

int main(void)
{
	int a, b, temp;
	
	scanf("%d", &a);
	scanf("%d", &b);
	
	temp = a;
	a = b;
	b = temp;
	
	printf("%d\n", a);
	printf("%d\n", b);
	
	return 0;
}
