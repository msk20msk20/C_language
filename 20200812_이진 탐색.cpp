#include <stdio.h>
#define SIZE 10 

int main(void)
{
	int target, low, high, mid, cnt;
	int data[10] = {2, 3, 5, 7, 8, 9, 11, 13, 15, 20};
	
	scanf("%d", &target);
	
	low = 0;
	high = 9;
	
	while (1)
	{
		if(low <= high)
		{
			mid=(low+high)/2;
			
			if(target == data[mid])
			{
				printf("%d�� %d��° index�� �ֽ��ϴ�.", target, mid);
				break;
			}
			if(target<=data[mid])
			{
				high = mid - 1;
			}
			else
			{
				low = mid + 1;
			}
		}
		else
		{
			printf("%d���� �������� �ʽ��ϴ�.", target);
			break;
		}
	}
	
	return 0;
}
