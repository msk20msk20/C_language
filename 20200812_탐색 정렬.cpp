#include <stdio.h>
#define SIZE 10 

int main(void)
{
	int list[SIZE] = {8, 5, 6, 4, 1, 3, 9, 10, 7, 2};
	int i, search;
	int pps = 1;
	
	printf("탐색할 정수를 입력하십시오(1~10): \n");
	scanf("%d", &search);
	
	for (i = 0; i < SIZE; i++)
	{
		if(list[i] == search)
		{
			pps = 0;
			printf("탐색완료. index:%d\n", i);
			printf("탐색완료. value:%d\n", list[i]);
		}
	}
	
	if (pps == 1)
	{
		printf("값이 없습니다.");
	}
	return 0;
}
