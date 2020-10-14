#include <stdio.h>

void f(int n)       //int 반환값 void 매개변수 
{
	if(n == 0)
		printf("false");
	else
		printf("true");
}

int main(void)
{
	int n; 
	
	scanf("%d", &n);
    f(n);
	
	return 0;
}
