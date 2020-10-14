#include <stdio.h>

int main(void)
{
	int n, i, j, array[24] = {};
	int min = 24;
	
	scanf("%d", &n);
	
	for(i=0; i<n; i++)
	{
		scanf("%d", &array[i]);
		
		if (min > array[i])
		{
			min = array[i];
		}
	}
	printf("%d ", min);
	
	return 0;
}
