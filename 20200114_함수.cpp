#include <stdio.h>

void f(int n)       //int ��ȯ�� void �Ű����� 
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
