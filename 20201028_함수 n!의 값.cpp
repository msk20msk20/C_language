#include <stdio.h>

int n;

long long int f(int a)
{
	long long int result = 1;
	for(int i = 1; i <= a ; i++)
	{
		result = result * i;
	}
	return result;
}

int main(void)
{
	scanf("%d", &n);
	printf("%lld \n", f(n));
	
	return 0;
}
