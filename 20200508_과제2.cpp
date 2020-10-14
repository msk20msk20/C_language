#include <stdio.h>

int main(void)
{
	int i, n=0;
	for(i=1; i<=100; i++)
	{
		if(i % 7 == 0 || i % 3 == 0)            // && 또는 ||를 써야 함 
		{
			printf("%d \n", i);
			n++;
		}
	}
	printf("총 갯수는 %d개 입니다.", n);
	
	return 0;
}
