#include <stdio.h>

int n;

void f(int n)       //int 반환값 void 매개변수 
{
	int value = 0;
	
	for(int i = 1; i <= n; i++)
	{
		if(n % i == 0)
		{
			value++;
		}
	}
	if(value == 2)
	    printf("prime");
	else
	    printf("composite");
}

int main()
{
  scanf("%d", &n);
  f(n);
  
  return 0;
}
