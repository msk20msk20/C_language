#include <stdio.h>

void f(int n)
{
	if(n % 2 == 0)
		printf("even");
		
	else
		printf("odd");
}

int main(void)
{
	int num;
	
	scanf("%d", &num);
	
	f(num);   //매개변수 
	
	return 0;
}
