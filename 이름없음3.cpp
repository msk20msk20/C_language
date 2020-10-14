#include <stdio.h>
int main()
{
	int dice1, dice2, i, j;
	
	
	scanf ("%d %d", &dice1, &dice2);
	for(i = 1; i <= dice1; i++)
	{
		for(j = 1; j <= dice2; j++)
		{
			printf ("%d %d \n", i, j);	
		}
	
	}

	return 0;
}
