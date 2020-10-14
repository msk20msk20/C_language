#include <stdio.h>

int main(void)
{
	int board[20][20] = {};
	int n, i, j, k, a, b;
	
	scanf("%d", &n);
	for (i=0; i<n; i++)
	{
		scanf("%d %d", &a, &b);
		board[a][b] = 1;
	}
	
	for(j=1; j<=19; j++)
	{
		for(k=1; k<=19; k++)
		{
			printf("%d ", board[j][k]);
		}
		printf("\n");
	}
	
	return 0;
}
