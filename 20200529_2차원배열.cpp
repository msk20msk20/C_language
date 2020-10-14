#include <stdio.h>

int main(void)
{
	int i, n;
	int array[3][6] = {{87, 67, 55, 100, 90, 94},
	                   {89, 83, 78, 95, 100, 90},
					   { 4,  5,  6,  7,   8,  9}};
	int array2[3][6] = {};
	
	for(i=0; i<=2; i++)
	{
		for(n=0; n<=5; n++)
		{
			printf("%d ", array[i][n]);
		}
		printf("\n");
	}
	
	return 0;
}
