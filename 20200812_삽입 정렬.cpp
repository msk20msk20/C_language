#include <stdio.h>

int main(void)
{
	int i, j, temp;
	int array[10] = {8, 5, 6, 4, 1, 3, 9, 10, 7, 2};
	
	for (i = 0; i < 9; i++)
	{
		j = i;
		while (array[j] > array[j+1])
		{
			temp = array[j];
			array[j] = array[j+1];
			array[j+1] = temp;
			j--;
		}
	}
	
	for(i = 0; i < 10; i++)
	{
		printf("%d \n", array[i]);
	}
	
	return 0;
}
