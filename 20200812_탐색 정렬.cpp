#include <stdio.h>
#define SIZE 10 

int main(void)
{
	int list[SIZE] = {8, 5, 6, 4, 1, 3, 9, 10, 7, 2};
	int i, search;
	int pps = 1;
	
	printf("Ž���� ������ �Է��Ͻʽÿ�(1~10): \n");
	scanf("%d", &search);
	
	for (i = 0; i < SIZE; i++)
	{
		if(list[i] == search)
		{
			pps = 0;
			printf("Ž���Ϸ�. index:%d\n", i);
			printf("Ž���Ϸ�. value:%d\n", list[i]);
		}
	}
	
	if (pps == 1)
	{
		printf("���� �����ϴ�.");
	}
	return 0;
}
