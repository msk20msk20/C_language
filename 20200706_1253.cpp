#include <stdio.h>

int main(void)
{
	int n, m, i;
	
	scanf("%d %d", &n, &m);
	
	if(n < m)
	{
		for(i = n; i <= m; i++)
		{
			printf("%d ", i);
		}
	}
	if(m < n)
	{
		for(i = m; i <= n; i++)
		{
			printf("%d ", i);
		}
	}
	if(m == n)
	{
		for(i = m; i <= n; i++)
		{
			printf("%d ", i);
		}
	}
	
	return 0;
}
