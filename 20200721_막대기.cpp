#include <stdio.h>

int main(void)
{
	int n, m, i, j, a = 0;
	int h[100000]; 
	scanf("%d", &n);
	
	
	for (i = 0; i < n; i++)
	{
		scanf("%d", &h[i]);
	}
	m = -1;
	for (j = n - 1; j >= 0; j--)
	{
		if(m < h[j])
		{
			m = h[j];
			a++;
		}
	}
	printf("%d", a);
	
	return 0;
}
