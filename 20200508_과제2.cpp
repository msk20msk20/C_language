#include <stdio.h>

int main(void)
{
	int i, n=0;
	for(i=1; i<=100; i++)
	{
		if(i % 7 == 0 || i % 3 == 0)            // && �Ǵ� ||�� ��� �� 
		{
			printf("%d \n", i);
			n++;
		}
	}
	printf("�� ������ %d�� �Դϴ�.", n);
	
	return 0;
}
