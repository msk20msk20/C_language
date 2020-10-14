#include <stdio.h>

int main(void)
{
	int i, j, min, index, temp;
	int array[10] = {8, 5, 6, 4, 1, 3 ,9, 10, 7, 2};
	
	for(i = 0; i < 10; i++)
	{
		min = 11;
		for(j = i; j < 10; j++)
		{
			if(min > array[j])
			{
				min = array[j];
				index = j;
			}
		}
		temp = array[i];
		array[i] = array[index];
		array[index] = temp;
	}
	
	for(i = 0; i < 10; i++)
	{
		printf("%d \n", array[i]);
	}
	
	return 0;
}
