#include <stdio.h>

int main(void)
{
	int n, i, j, k;
	int mario[24] = {};
	
	scanf("%d", &n);
	
	for (i = 0; i < n; i++)
	{
		scanf ("%d", &j);
		mario[j]++;
	}
	
	for (k = 1; k <= 23; k++)
	{
		printf("%d ", mario[k]);
	}
	
	return 0;
}
