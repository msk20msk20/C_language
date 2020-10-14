#include <stdio.h>

int main(void)
{
	int n, m, i, num = 0;
	
	scanf("%d %d", &n, &m);
	
	for(i = n; i <= m; i++)
	{
		if(i % 3 == 0)
		{
			num = num + i;
		}
	}
	
	printf("%d", num);
	
	return 0;
}
