#include <stdio.h>

int zero(int n)       //int 반환값 void 매개변수 
{
	if(n == 0)
		return 1;
	else
		return 0;
}

int main(void)
{
	int n;
    scanf("%d", &n);
    
    if(zero(n))
		printf("zero");
    else
		printf("non zero");
    
    return 0;
}
